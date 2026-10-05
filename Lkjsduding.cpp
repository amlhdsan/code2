#include <stdio.h>

int main(void) {
    int n;
    unsigned long long k;
    scanf("%d,%llu", &n, &k);

    unsigned long long myb[27];
    myb[0] = 1;
    for (int i = 1; i <= 26; ++i) {
        if (myb[i - 1] > (~0ULL) / i) {
            myb[i] = ~0ULL;
        } else {
            myb[i] = myb[i - 1] * i;
        }
    }

    if (k > myb[n]) {
        k = myb[n];
    }
    k--;

    int flg[26] = {0};
    for (int i = 1; i <= n; ++i) {
        int rem = n - i;
        unsigned long long f = (rem <= 20) ? myb[rem] : ~0ULL;
        int idx = (int)(k / f);
        k %= f;

        int cnt = 0;
        for (int c = 0; c < n; ++c) {
            if (!flg[c]) {
                if (cnt == idx) {
                    putchar('a' + c);
                    flg[c] = 1;
                    break;
                }
                cnt++;
            }
        }
    }
    putchar('\n');
    return 0;
}
