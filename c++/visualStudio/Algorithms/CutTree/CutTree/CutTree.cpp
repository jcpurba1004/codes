#include<bits/stdc++.h>
using namespace std;


int visited[100009];
vector<int> edges[100009];
int val_node[100009];
int val[100009];


int diff(int val, int sum)
{
    return abs(sum - 2 * val);
}


int dfs(int node)
{

    if (visited[node] == 1)
        return 0;

    if (edges[node].size() == 1)
    {
        val_node[node] = val[node];
        visited[node] = 1;
        return val_node[node];
    }

    else
    {
        vector<int> ::iterator it;
        visited[node] = 1;
        int c = val[node];
        for (it = edges[node].begin(); it != edges[node].end(); it++)
        {
            int k = (*it);
            c += dfs(k);
        }
        val_node[node] = c;
        return val_node[node];
    }
}

int main()
{
    int N, root, i;
    cin >> N;
    assert(3 <= N);
    assert(N <= 100000);
    int s = 0;
    for (i = 1; i <= N; i++)
    {
        cin >> val[i];
        assert(1 <= val[i]);
        assert(val[i] <= 10001);
        s = s + val[i];
    }


    for (i = 0; i < N - 1; i++)
    {
        int a, b;
        cin >> a;
        cin >> b;
        assert(1 <= a);
        assert(1 <= b);
        assert(a <= N);
        assert(b <= N);
        edges[a].push_back(b);
        edges[b].push_back(a);
    }


    for (i = 1; i <= N; i++)
    {
        if (edges[i].size() > 1)
        {
            root = i;
            break;
        }
    }

    for (i = 1; i <= N; i++)
        val_node[i] = visited[i] = 0;

    int c = dfs(root);


    for (i = 1; i <= N; i++)
        val_node[i - 1] = diff(val_node[i], s);

    sort(val_node, val_node + N);
    cout << val_node[0] << endl;
    return 0;
}