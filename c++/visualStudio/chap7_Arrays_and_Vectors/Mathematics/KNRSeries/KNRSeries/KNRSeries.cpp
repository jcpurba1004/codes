#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


ll dp[1005][1005];

long long int inverse(long long int a, long long int n)
{
    long long int i = n, v = 0, d = 1;
    while (a > 0) {
        int t = i / a, x = a;
        a = i % x;
        i = x;
        x = d;
        d = v - t * x;
        v = x;
    }
    v %= n;
    if (v < 0) v = (v + n) % n;
    return v;
}

long long int power(long long int a, long long int b, long long int c)//To calculate A^B%C
{
    long long int res = 1, apower = a;
    while (b > 0) {
        if (b % 2 == 1) {
            res = ((res) % c) * ((apower) % c) % c;
        }
        apower = ((apower % c) * (apower % c)) % c;
        b = b / 2;
    }
    return res % c;
}


int main()
{

    ll i, j, k, n, r, t;

    ll MOD = 1000000007LL;

    scanf("%lld", &t);

    ll fact[1005];

    ll inv[1005];

    fact[0] = 1;

    inv[0] = 1;

    for (i = 1; i < 1005; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;

        inv[i] = inverse(fact[i], MOD);

    }


    while (t--) {
        scanf("%lld%lld%lld", &k, &n, &r);
        ll a10 = r % MOD;
        ll in1 = inverse((r - 1) % MOD, MOD);
        a10 = (a10 * in1) % MOD;
        for (i = 0; i <= k; i++) {
            for (j = k; j >= 0; j--) {
                if (i == 0) {
                    ll po = power(r % MOD, (n + 1 - j) % (MOD - 1), MOD);
                    po = po - 1;
                    po = (po * in1) % MOD;
                    if (po < 0)
                        po += MOD;
                    dp[i][j] = po;
                }
                else if (j == k)
                    dp[i][j] = 0;
                else {
                    dp[i][j] = 0;
                    for (ll l = 0; l <= i - 1; l++) {
                        ll a1 = (fact[i] * inv[l]) % MOD;
                        a1 = (a1 * inv[i - l]) % MOD;
                        dp[i][j] = (dp[i][j] + dp[l][j + 1] * a1) % MOD;
                    }
                    ll an1 = power(r % MOD, (n - j) % (MOD - 1), MOD);
                    an1 = (an1 * power((n - j) % MOD, i, MOD)) % MOD;
                    if (r % MOD == 0)
                        an1 = 0;
                    dp[i][j] = ((-dp[i][j] % MOD + MOD) % MOD + an1) % MOD;
                    dp[i][j] = (dp[i][j] * a10) % MOD;
                    if (dp[i][j] < 0)
                        dp[i][j] = dp[i][j] + MOD;
                }
            }
        }
        printf("%lld\n", dp[k][0]);
    }
    return 0;
}