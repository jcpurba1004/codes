#include <bits/stdc++.h>

using namespace std;

#define mod 1000000007

long modmul(long a, long b) {
    long r = 0;

    a %= mod;

    while (b) {
        if (b & 1) {
            r = (r + a) % mod;
        }

        a = (a + a) % mod;
        b >>= 1;
    }

    return r;
}

long modpow(long a, long b) {
    long r = 1;

    a %= mod;

    while (b) {
        if (b & 1) {
            r = modmul(r, a);
        }

        a = modmul(a, a);
        b >>= 1;
    }

    return r;
}

long modinv(long a) {
    return modpow(a, mod - 2);
}

bool square(long n) {
    if (n < 0) {
        return false;
    }

    long sqn = static_cast<long>(sqrt(n));

    return sqn * sqn == n;
}

tuple<long, long, long> solve(long x, long y, long z) {
    long a = -1;
    long b = -1;
    long c = -1;

    for (long j = 1; j < 30001; j++) {
        long j2 = j * j;
        long j3 = j * j2;
        long j4 = j * j3;

        long f = x - j2;
        long g = y - j3;
        long h = z - j4;

        long d = 2 * h - f * f;

        if (square(d)) {
            d = static_cast<long>(sqrt(d));

            c = f - d;

            if (!(c & 1)) {
                c >>= 1;

                if (square(c)) {
                    b = f - c;

                    if (square(b)) {
                        c = static_cast<long>(sqrt(c));
                        b = static_cast<long>(sqrt(b));

                        if (j < b and b * b * b + c * c * c == g) {
                            a = j;
                        }
                    }
                }
            }
        }

        if (a != -1) {
            break;
        }
    }

    return make_tuple(a, b, c);
}

long gp(long a, long l, long r) {
    if (a == 1) {
        return (r - l + 1) % mod;
    }

    long s1 = modpow(a, r + 1);
    long s2 = modpow(a, l);

    return ((s1 - s2 + mod) * modinv(a - 1)) % mod;
}

int main()
{
    int q;
    cin >> q;
    assert(q >= 1 and q <= 2500);

    while (q--) {
        long x, y, z, l, r;
        cin >> x >> y >> z >> l >> r;
        assert(l >= 1 and l <= 1e15);
        assert(r >= l and r <= 1e15);

        tuple<long, long, long> sln = solve(x, y, z);

        long a = get<0>(sln);
        long b = get<1>(sln);
        long c = get<2>(sln);

        long f1 = a + b + c;
        assert(f1 >= 6 and f1 <= 15e3);

        long sa = gp(a, l, r);
        long sb = gp(b, l, r);
        long sc = gp(c, l, r);

        long s = (sa + sb + sc) % mod;
        assert(s >= 0 and s < mod);

        cout << s << endl;
    }

    return 0;
}