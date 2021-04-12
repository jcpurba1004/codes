// Equations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

typedef long long lli;

const lli mod = 1000007;

const int mx = 1000000;
const int S = sqrt(mx) + 1;
int prime[mx], np = 0;
bool isnp[mx + 10];
void siv(void) {
    int i, j, k;
    np = 0;
    isnp[1] = isnp[0] = true;
    prime[np++] = 2;
    for (i = 3; i <= S; i += 2)
        if (!isnp[i])
            for (prime[np++] = i, j = i * i, k = (i << 1); j <= mx; j += k)
                isnp[j] = true;
    for (; i <= mx; i += 2)
        if (!isnp[i])
            prime[np++] = i;
}
// prime power in n!
lli pinf(int p, int n) {
    int ans = 0;
    while (n) {
        ans += (n / p);
        n /= p;
    }
    return ans;
}
// number of divisors of (n!)^2
lli ndivfact2(int n) {
    int i = 0;
    lli ans = 1;
    while (prime[i] <= n) {
        ans *= (pinf(prime[i], n) * 2) + 1;
        ans %= mod;
        i++;
    }
    return ans;
}
int main() {
    siv();
    int i, j, k;
    int n;
    cin >> n;
    cout << ndivfact2(n) << endl;
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
