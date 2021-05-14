#include <bits/stdc++.h>
using namespace std;

const int sz = 101;

string graph[sz];
int vis[sz][sz];
int par[sz][sz][2];

int N, M;
int L;
int X[] = { 1, -1, 0, 0 };
int Y[] = { 0, 0, -1, 1 };

bool valid(int r, int c) {
    return r >= 0 && r < N&& c >= 0 && c < M&& graph[r][c] != 'X';
}

void dfs(int r, int c, int pr, int pc) {
    if (!valid(r, c))
        return;
    assert(vis[r][c] != 1);
    if (vis[r][c] == 2)
        return;
    vis[r][c] = 1;
    par[r][c][0] = pr;
    par[r][c][1] = pc;

    for (int i = 0; i < (int)4; ++i) {
        if (r + X[i] != pr || c + Y[i] != pc) {
            dfs(r + X[i], c + Y[i], r, c);
        }
    }
    vis[r][c] = 2;
}

int main()
{
    int test;
    scanf("%d", &test);
    assert(test >= 1 && test <= 10);

    while (test--) {
        int xCount = 0, mCount = 0;
        cin >> N >> M;
        int sr, sc, fr, fc;
        sr = sc = fr = fc = -1;
        memset(vis, 0, sizeof(vis));

        assert(N >= 1 && N <= 100);
        assert(M >= 1 && M <= 100);

        for (int i = 0; i < (int)N; ++i) {
            cin >> graph[i];
            assert((int)graph[i].size() == M);

            for (int j = 0; j < (int)M; ++j) {
                if (graph[i][j] == 'M') {
                    mCount++;
                    sr = i;
                    sc = j;
                }
                else if (graph[i][j] == '*') {
                    xCount++;
                    fr = i;
                    fc = j;
                }
                else
                    assert(graph[i][j] == '.' || graph[i][j] == 'X');
            }
        }
        cin >> L;
        assert(mCount == 1);
        assert(xCount == 1);
        assert(0 <= L && L <= 10000);

        dfs(sr, sc, -1, -1);
        assert(vis[fr][fc] == 2);

        int r = par[fr][fc][0], c = par[fr][fc][1];

        while (r != sr || c != sc) {
            int cnt = 0;
            for (int i = 0; i < 4; i++) {
                int rr = r + X[i], cc = c + Y[i];
                if (valid(rr, cc)) {
                    //printf("rr = %d, cc = %d\n", rr, cc);
                    cnt++;
                }
            }

            assert(cnt > 1);
            if (cnt > 2)
                L--;

            fr = par[r][c][0];
            fc = par[r][c][1];
            r = fr;
            c = fc;
        }

        int cnt = 0;
        for (int i = 0; i < 4; i++) {
            int rr = r + X[i], cc = c + Y[i];
            if (valid(rr, cc)) {
                cnt++;
            }
        }
        if (cnt > 1)
            L--;

        cout << (L == 0 ? "Impressed" : "Oops!") << "\n";
    }

    return 0;
}