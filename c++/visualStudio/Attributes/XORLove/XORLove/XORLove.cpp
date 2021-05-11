#include<stdio.h>
#include<algorithm>
#include<vector>
#include<set>
#include<stdlib.h>
#include<string.h>
#include<utility>
#include<assert.h>
using namespace std;
typedef long long int ll;
int A[100001][31];
int main()
{
    {
        ll answer = 0, ones, zeros, o, z;
        int N, x, pow[31], y, k, M;
        pow[0] = 1;
        for (int i = 1; i < 31; i++) pow[i] = pow[i - 1] << 1;
        scanf("%d", &N);
        assert(N <= 100000 && N >= 1);
        for (int i = 0; i < 31; i++) A[0][i] = 0;
        for (int i = 1; i <= N; i++)
        {
            scanf("%d", &x);
            assert(x <= 1000000 && x >= 1);
            for (int j = 0; j < 31; j++) A[i][j] = A[i - 1][j] + ((x & pow[j]) ? 1 : 0);
        }
        scanf("%d", &M);
        assert(M <= 10000);
        while (M--)
        {
            answer = 0;
            scanf("%d", &k);
            assert(k >= 1 && k <= 1000000);
            x = 0;
            y = N;
            for (int i = 0; i < 31; i++) {
                o = A[y][i] - A[x][i];
                z = (y - x) - o;
                ones = z * o;
                zeros = (z * (z - 1) + o * (o - 1)) / 2;
                if ((k & pow[i]) == 0)
                    answer = (answer + (ll)pow[i] * ones);
                else
                    answer = (answer + (ll)pow[i] * zeros);
            }
            printf("%lld\n", answer % (1000000007));

        }
        return 0;
    }