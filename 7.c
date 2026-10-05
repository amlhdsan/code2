#include <stdio.h>
#include <stdlib.h>

int a, b, c;
int na, nb, nc;
int ma, mb, mc;
int E;
int a1, a2, a3;

int main() {

    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &na, &nb, &nc);
    scanf("%d %d %d", &ma, &mb, &mc);
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

    printf("%d %d %d\n", a1, a2, a3);

    return 0;
}
