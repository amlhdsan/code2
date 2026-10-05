#include <stdio.h>
#include <stdlib.h>

int a, b, c;
int na, nb, nc;
int ma, mb, mc;
int E;
int a1 = 1000000, a2 = 1000000, a3 = 1000000;

int main() {

    scanf("%d,%d,%d", &a, &b, &c);
    scanf("%d,%d,%d", &na, &nb, &nc);
    scanf("%d,%d,%d", &ma, &mb, &mc);
    scanf("%d", &E);

    for(int i = -ma; i <= na; ++i) {
        for(int j = -mb; j <= nb; ++j) {
            int k = E - i * a - j * b;
            if(k % c != 0) continue;
            k /= c;
            if(k < -mc || k > nc) continue;
            if(abs(i) + abs(j) + abs(k) < abs(a1) + abs(a2) + abs(a3) || (abs(i) + abs(j) + abs(k) == abs(a1) + abs(a2) + abs(a3) && (i <= 0 ? -i : 0) + (j <= 0 ? -j : 0) + (k <= 0 ? -k : 0) < (a1 <= 0 ? -a1 : 0) + (a2 <= 0 ? -a2 : 0) + (a3 <= 0 ? -a3 : 0))) {
                a1 = i;
                a2 = j;
                a3 = k;
            }
        }
    }

    if(a1 == 1000000) {
        printf("Cannot buy.\n");
        return 0;
    }

    if(a1 > 0) {
        printf("Buyer pays %d bills of %d yuan.\n", a1, a);
    }
    if(a1 < 0) {
        printf("Seller changed %d bills of %d yuan.\n", -a1, a);
    }
    if(a2 > 0) {
        printf("Buyer pays %d bills of %d yuan.\n", a2, b);
    }
    if(a2 < 0) {
        printf("Seller changed %d bills of %d yuan.\n", -a2, b);
    }
    if(a3 > 0) {
        printf("Buyer pays %d bills of %d yuan.\n", a3, c);
    }
    if(a3 < 0) {
        printf("Seller changed %d bills of %d yuan.\n", -a3, c);
    }

    return 0;
}
