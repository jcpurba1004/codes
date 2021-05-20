#include <algorithm>
#include <iostream>
#include <cstring>
#include <complex>
#include <cassert>
#include <cstdlib>
#include <cstdio>
#include <bitset>
#include <vector>
#include <string>
#include <cmath>
#include <ctime>
#include <queue>
#include <list>
#include <map>
#include <set>

#define all(x) (x).begin(), (x).end()
#define type(x) __typeof((x).begin())
#define foreach(it, x) for(type(x) it = (x).begin(); it != (x).end(); it++)

#ifdef KAZAR
#define eprintf(...) fprintf(stderr,__VA_ARGS__)
#else
#define eprintf(...) 0
#endif

using namespace std;

template<class T> inline void umax(T& a, T b) { if (a < b) a = b; }
template<class T> inline void umin(T& a, T b) { if (a > b) a = b; }
template<class T> inline T abs(T a) { return a > 0 ? a : -a; }
template<class T> inline T gcd(T a, T b) { return __gcd(a, b); }
template<class T> inline T lcm(T a, T b) { return a / gcd(a, b) * b; }

const int inf = 1e9 + 143;
const long long longinf = 1e18 + 143;

inline int read() { int x; scanf(" %d", &x); return x; }

const int N = 1 << 17;

struct line {
    long long m, n, id;
    line(long long _m = 0, long long _n = 0, int _id = 0) {
        m = _m;
        n = _n;
        id = _id;
    }
    bool operator < (const line& a) const {
        return m > a.m;
    }
    long long calc(long long x) {
        return x * m + n;
    }
};

line ls[N];

long double cross(line L1, line L2) {
    return (long double)(L2.n - L1.n) / (L1.m - L2.m);
}

bool bad(line L1, line L2, line L3) {
    return cross(L1, L3) < cross(L1, L2);
}

class convex {
public:
    vector<line> st;
    convex() {
        st.clear();
    }
    void add_line(line L) {
        while ((int)st.size() >= 2 && bad(st[(int)st.size() - 2], st.back(), L))
            st.pop_back();
        st.push_back(L);
    }
    long long get_min(long long x) {
        if ((int)st.size() == 0)
            return longinf;
        if ((int)st.size() == 1)
            return st[0].calc(x);
        int l = 0, r = (int)st.size() - 1;
        while (l + 1 < r) {
            int m = (l + r) >> 1;
            if (cross(st[m], st[m + 1]) <= x)
                l = m;
            else
                r = m;
        }
        if (l == 0 && cross(st[0], st[1]) > x)
            return st[0].calc(x);
        return st[l + 1].calc(x);
    }
};

convex tree[N << 1];

long long get(int l, int r, int x) {
    assert(l <= r);
    assert(l >= 1 && r <= N);
    long long res = +longinf;
    l += N - 1; r += N - 1;
    while (l <= r) {
        if (l & 1)
            umin(res, tree[l++].get_min(x));
        if (~r & 1)
            umin(res, tree[r--].get_min(x));
        l >>= 1;
        r >>= 1;
    }
    return res;
}

int main() {

#ifdef KAZAR
    freopen("f.input", "r", stdin);
    freopen("f.output", "w", stdout);
    freopen("error", "w", stderr);
#endif

    int n = read();

    for (int i = 1; i <= n; i++) {
        int a = read();
        int c = read();
        assert(a < 0);
        ls[i] = line(-a, -c, i);
    }

    sort(ls + 1, ls + 1 + n);

    for (int i = 1; i <= n; i++) {
        int x = ls[i].id + N - 1;
        while (x >= 1) {
            tree[x].add_line(ls[i]);
            x >>= 1;
        }
    }

    int q = read();

    for (int i = 0; i < q; i++) {
        int l = read();
        int r = read();
        int x = read();
        int y = read();
        if (get(l, r, x) < -y) {
            puts("YES");
        }
        else {
            puts("NO");
        }
    }

    return 0;
}