#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    unsigned long int a, b, c, d, y;
    int q;
    float x;

    scanf("%d", &q);

    while (q--) {
        scanf("%lu%lu%lu%lu", &a, &b, &c, &d);
        int count = 0;

        for (y = 1; y <= d; y++) {
            x = ((a + sqrt(a * a - 4 * (y * y - y * b)))) / 2;
            if (x - (int)x == 0 && x >= 1 && x <= c) {

                count++;
            }
        }
        printf("%d", count);
    }
    return 0;
}