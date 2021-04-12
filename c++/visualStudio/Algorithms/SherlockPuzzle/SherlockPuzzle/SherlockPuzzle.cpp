// SherlockPuzzle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <map>
#include <set>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <vector>
#include <ctime>
#include <cmath>
#include <cstdio>
#include <string>
#include <cstring>
#include <cassert>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long LL;
typedef vector<int> VI;
typedef pair<int, int> PII;
#define MM(a,x) memset(a,x,sizeof(a));
#define ALL(x)  (x).begin(), (x).end()
#define P(x)    cerr<<"["#x<<" = "<<x<<"]\n"
#define PP(x,i)    cerr<<"["#x<<i<<" = "<<x[i]<<"]\n"
#define P2(x,y)    cerr<<"["#x" = "<<x<<", "#y" = "<<y<<"]\n"
#define TM(a,b)    cerr<<"["#a" -> "#b": "<<1e3*(b-a)/CLOCKS_PER_SEC<<"ms]\n";
#define FOR(it,v) for(__typeof(v.begin()) it=v.begin();it!=v.end();it++)
#define uni(v) sort(ALL(v)), v.resize(unique(ALL(v)) - v.begin())
#define mp make_pair
#define pb push_back
#define x first
#define y second
struct _ { _() { ios_base::sync_with_stdio(0); } } _;
template<class T> void PV(T a, T b) { while (a != b)cout << *a++, cout << (a != b ? " " : "\n"); cout.flush(); }
template<class T> inline bool chmin(T& a, T b) { return a > b ? a = b, 1 : 0; }
template<class T> inline bool chmax(T& a, T b) { return a < b ? a = b, 1 : 0; }
const int inf = 0x3f3f3f3f;
const int mod = int(1e9) + 7;
const int N = 1111111;

string s;
int K;
int n;
int c0, c1;
int score;
int d[N];
int sL[N];
int sR[N];

int crossMid(int least) {
    vector<PII> L, R;
    for (int i = n - 1; i >= 0; i--) {
        while (!L.empty() && sL[i] >= L.back().x) L.pop_back();
        L.pb(mp(sL[i], n - i));
    }

    for (int i = 0; i < n; i++) {
        while (!R.empty() && sR[i] >= R.back().x) R.pop_back();
        R.pb(mp(sR[i], i + 1));
    }

    int res = 0;
    for (int i = 0; i < L.size(); i++) if (L[i].x >= least) chmax(res, L[i].y);
    for (int i = 0; i < R.size(); i++) if (R[i].x >= least) chmax(res, R[i].y);
    int l = 0, r = (int)R.size() - 1;
    while (l < L.size() && r >= 0) {
        while (r >= 0 && L[l].x + R[r].x < least) r--;
        if (r >= 0) chmax(res, L[l].y + R[r].y);
        l++;

    }
    return res;
}


int p[N];
int rmax[N];

LL solve() {
    for (int i = 0; i < n; i++) p[i + 1] = sR[i];
    rmax[n] = p[n];
    for (int i = n - 1; i >= 0; i--) rmax[i] = max(rmax[i + 1], p[i]);
    int mx = 0;
    int l = 0;
    int r = 0;
    for (int i = 0; i < n; i++) {
        if (i != 0 && p[i] >= p[l]) continue;
        int rr = -1;
        while (r <= n && rmax[r] - p[i] >= 0) {
            rr = r - i;
            r++;
        }
        r--;
        int len = rr;
        if (mx <= len) {
            mx = len;
            l = i;
        }
    }
    return mx;
}

LL brute() {
    string S;
    for (int i = 0; i < K; i++) S += s;
    vector<int> pt(S.length() + 1, 0);
    LL res = 0;
    for (int i = 0; i < S.length(); i++) pt[i + 1] = pt[i] + d[i % n];
    int pi = -1, pj = -1;
    for (int i = 0; i < S.length(); i++)
        for (int j = i; j < S.length(); j++) {
            LL sc = pt[j + 1] - pt[i];
            if (sc >= 0 && chmax(res, (LL)(j - i + 1))) {
                pi = i, pj = j;
            }
        }
    return res;
}

int main() {
    cin >> K >> s;
    n = s.length();
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            c0++;
            d[i] = -2;
        }
        else {
            c1++;
            d[i] = 3;
        }
        score += d[i];
    }

    //P(score);
    LL res = 0;
    if (score >= 0) {
        res = (LL)n * K;
    }
    else {
        int tot = 0;
        {
            int mx = 0;
            for (int i = n - 1; i >= 0; i--) {
                sL[i] = sL[i + 1] + d[i];
                chmax(mx, sL[i]);
            }
            tot += mx;
        }
        {
            int mx = 0;
            for (int i = 0; i < n; i++) {
                if (i > 0) sR[i] = sR[i - 1] + d[i];
                else sR[i] = d[i];
                chmax(mx, sR[i]);
            }
            tot += mx;
        }

        if (K >= 2) {
            LL T = min(K - 2, tot / abs(score));
            res += n * T;
            //        P(res);
            res += crossMid(-score * T);
            chmax(res, solve());
        }
        else {
            res = solve();
        }
    }
    cout << res << endl;
    //P(brute());
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file