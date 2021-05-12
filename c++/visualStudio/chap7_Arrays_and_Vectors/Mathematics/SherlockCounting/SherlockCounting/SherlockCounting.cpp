#include <map>
#include <set>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cctype>
#include <cstdio>
#include <vector>
#include <cassert>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
struct _ { ios_base::Init i; _() { cin.sync_with_stdio(0); cin.tie(0); } } _;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long lo = 1, hi = n / 2;
        while (lo < hi)
        {
            long long mi = (lo + hi + 1) / 2;
            if (mi * (n - mi) > n * k) hi = mi - 1;
            else lo = mi;
        }
        long long ret = 2 * lo - (lo + lo == n);
        if (lo > hi) ret = 0;
        cout << ret << "\n";
    }
    return 0;
}