#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <complex>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <valarray>
#include <vector>

using namespace std;

namespace stuff {
    typedef long long ll;
    const int mod = 1000000009;
    int H[333000];
    int x[4][333000];
    int ord[333000];

    template <size_t d> struct Comp {
        bool operator()(const int& a, const int& b) const {
            return x[d][a] < x[d][b];
        }
    };

    void solve(int test_num) {
        int N, D;
        cin >> N >> D;
        for (int i = 0; i < N; i++) {
            cin >> H[i];
            for (int j = 0; j < D; j++)
                cin >> x[j][i];
        }
        ll res = 0;
        for (int d = 0; d < D; d++) {
            ll totH = 0, totHX = 0;
            for (int i = 0; i < N; i++)
                ord[i] = i;
            if (d == 0)
                sort(ord, ord + N, Comp<0>());
            else if (d == 1)
                sort(ord, ord + N, Comp<1>());
            else if (d == 2)
                sort(ord, ord + N, Comp<2>());
            else
                sort(ord, ord + N, Comp<3>());
            for (int i = 0; i < N; i++) {
                totH = (totH + H[i]) % mod;
                totHX = (totHX + ll(H[i]) * x[d][i]) % mod;
            }
            ll sumH = 0, sumHX = 0;
            for (int i = 0; i < N; i++) {
                res = (res + H[ord[i]] * ((sumH * x[d][ord[i]] % mod) - sumHX)) % mod;
                res = (res + H[ord[i]] * (totHX - sumHX - ((totH - sumH) * x[d][ord[i]]) % mod)) % mod;
                sumH = (sumH + H[ord[i]]) % mod;
                sumHX = (sumHX + ll(x[d][ord[i]]) * H[ord[i]]) % mod;
            }
        }
        if (res < 0)
            res += mod;
        res = res * 500000005 % mod; //2 inverse
        cout << res << endl;
    }

    void solve() {
#ifdef AZN
        //makecase();
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        //freopen("azn.txt", "w", stderr);
        double start_t = clock();
#endif
        ios::sync_with_stdio(false);
        //  int T;
        //  cin >> T;
        //  while (T--)
        solve(1);
#ifdef AZN
        pln("Took:", (clock() - start_t) / CLOCKS_PER_SEC);
#endif
    }
}

int main()
{
    stuff::solve();
    return 0;
}