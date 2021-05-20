#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cassert>
#include <cmath>
#include <iomanip>

using namespace std;

const int MAXN = 3000000 + 10;

double f[MAXN], hMin[MAXN], hMax[MAXN];
int n;

int main(int argc, const char* argv[]) {

    cin >> n;
    assert(3 <= n && n <= 3000000);

    hMin[0] = hMax[0] = cos(0);
    hMin[1] = hMax[1] = cos(1);
    for (int i = 2; i <= n; i++) {
        hMin[i] = min(hMin[i - 2], cos(i / 2.0));
        hMax[i] = max(hMax[i - 2], cos(i / 2.0));
    }

    f[2] = sin(1) + sin(1);
    for (int i = 3; i <= n; i++)
        f[i] = max(2.0 * sin(i / 2.0) * hMin[i - 2], 2.0 * sin(i / 2.0) * hMax[i - 2]);

    double ret = -10.0;

    for (int i = 1; i <= n - 2; i++)
        ret = max(ret, sin(i) + f[n - i]);

    cout << fixed << setprecision(9);
    cout << ret << endl;

    return 0;
}