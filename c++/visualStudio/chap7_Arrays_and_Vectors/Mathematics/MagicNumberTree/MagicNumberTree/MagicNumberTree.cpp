#include <bits/stdc++.h>
using namespace std;

const long long P = 1000000009;
const int Nmax = 5009;
int n;
vector <int> d[Nmax], v[Nmax];
long long p[Nmax], ans, deep_sum[Nmax];

void input() {
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        v[x].push_back(y);
        v[y].push_back(x);
        d[x].push_back(z);
        d[y].push_back(z);
    }
}

void dfs(int x, int from, int deep, int len) {
    deep_sum[deep] += len;
    for (int i = 0; i < v[x].size(); i++) {
        if (v[x][i] != from) {
            dfs(v[x][i], x, deep + 1, len + d[x][i]);
        }
    }
}

long long mypow(long long x, long long y) {
    long long R = 1;
    while (y) {
        if (y & 1) {
            R = (R * x) % P;
        }
        y /= 2;
        x = (x * x) % P;
    }
    return R;
}

void sol() {
    for (int i = 1; i <= n; i++)
        dfs(i, i, 1, 0);

    long long NF = 1;
    for (int i = 1; i <= n; i++)
        NF = (NF * i) % P;

    for (int i = 1; i <= n; i++)
        ans = (ans + deep_sum[i] % P * NF % P * mypow(i, P - 2)) % P;
    cout << ans << endl;
}

int main() {
    input();
    sol();
    return 0;
}