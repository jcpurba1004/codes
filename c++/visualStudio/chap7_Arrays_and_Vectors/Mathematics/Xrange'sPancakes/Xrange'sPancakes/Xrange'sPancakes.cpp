#include <iostream>

#include <cstdio>
#include <cassert>

using namespace std;

void check(int v, int l, int r) {
    assert(v >= l and v <= r);
}

int main()
{
    int t;
    scanf("%d", &t);
    check(t, 1, 20);

    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        check(n, 3, 1e6);
        check(m, 1, 1e6);

        bool f = true;

        int r = 0;

        while (m--) {
            int q, k;
            scanf("%d %d", &q, &k);
            check(q, 1, 2);
            check(k, 0, n - 1);

            if (q == 1) {
                r = (r + k) % n;
            }
            else {
                r = (n - r + k) % n;

                f = !f;
            }
        }

        if (f) {
            printf("1 %d\n", (n - r) % n);
        }
        else {
            printf("2 %d\n", r);
        }
    }

    return 0;
}