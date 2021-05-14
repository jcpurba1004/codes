#include <cstdio>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int const INF = -1;

int const N = 42;

int q[N * N];
int d[N][N];

int solve(int n, int da, int db) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) d[i][j] = INF;
    int head = 0;
    int tail = 0;
    q[tail++] = 0;
    d[0][0] = 0;
    vector<pair<int, int> > moves;
    for (int i = -1; i <= 1; i += 2) {
        for (int j = -1; j <= 1; j += 2) {
            moves.push_back({ da * i, db * j });
            if (da != db) {
                moves.push_back({ db * i, da * j });
            }
        }
    }
    while (head < tail) {
        int v = q[head++];
        int cx = v / n;
        int cy = v % n;
        for (auto& e : moves) {
            int dx = e.first;
            int dy = e.second;
            if (abs(dx) == abs(dy) && da != db) continue;
            int nx = cx + dx;
            int ny = cy + dy;
            if (nx < 0 || ny < 0 || nx >= n || ny >= n || d[nx][ny] != INF) continue;
            d[nx][ny] = d[cx][cy] + 1;
            q[tail++] = nx * n + ny;
        }
    }
    return d[n - 1][n - 1] == INF ? -1 : d[n - 1][n - 1];
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (j > 1) putchar(' ');
            printf("%d", solve(n, i, j));
        }
        puts("");
    }
}