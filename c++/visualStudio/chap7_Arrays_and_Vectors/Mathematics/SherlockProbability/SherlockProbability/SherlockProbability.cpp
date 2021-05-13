#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define clr(x) x.clear()
#define sz(x) ((int)(x).size())
#define F first
#define S second
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,b) for(i=0;i<b;i++)
#define rep1(i,b) for(i=1;i<=b;i++)
#define pdn(n) printf("%d\n",n)
#define sl(n) scanf("%lld",&n)
#define sd(n) scanf("%d",&n)
#define pn printf("\n")
typedef pair<int, int> PII;
typedef vector<PII> VPII;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long LL;
#define MOD 1000000007
LL mpow(LL a, LL n)
{
    LL ret = 1; LL b = a; while (n) {
        if (n & 1)
            ret = (ret * b) % MOD; b = (b * b) % MOD; n >>= 1;
    }
    return (LL)ret;
}
LL gcd(LL a, LL b)
{
    if (b == 0)return a; return gcd(b, a % b);
}
LL pre[100005] = {};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        LL n, k, i, j, ans = 0;
        cin >> n >> k;
        cin >> s;
        for (i = 0; i <= n; i++)pre[i] = 0;
        for (i = 1; i <= n; i++)
        {
            pre[i] = pre[i - 1];
            if (s[i - 1] == '1')pre[i]++;
        }
        for (i = 1; i <= n; i++)
        {
            if (s[i - 1] == '0')continue;
            ans += pre[min(n, i + k)] - pre[max(0ll, i - k - 1)];
        }
        LL gc = gcd(ans, n * n);
        cout << ans / gc << "/" << (n * n) / gc << endl;
    }
    return 0;
}