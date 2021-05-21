#include <cstdio>
#include <algorithm>
#include <cstdio>

using namespace std;

#define all(a) (a).begin(),(a).end()
#define pb push_back
#define sz(a) ((int)(a).size())
#define mp make_pair
#define fi first
#define se second

typedef pair<int, int> pint;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;

int n, m;

double Solve(int n, int m)
{
    ll sum = 0;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= m; j++)
        {
            sum += n - 1;
            if (abs(i - j) <= 1)
                continue;
            else if (i < j)
                sum += max(0, m - (i + n - 1));
            else
                sum += max(0, i - n);
        }
    return double(sum) / (m * m);
}

int main()
{
    scanf("%d %d", &n, &m);
    printf("%.10lf\n", Solve(n, m));
    return 0;
}