#include <stdio.h>
#include <stdlib.h>

int main() {
    // printf("Hello, World!\n");
    unsigned long n, max;
    scanf("%lu,%lu", &n, &max);
    unsigned long sum = 0;
    unsigned long f = 1;
    for (unsigned long i = 1; i <= n; i++) {
        f *= i;
        if (sum + f > max) {
            printf("overflow at %lu!\n", i);
            return 0;
        }
        sum += f;
    }
    printf("%lu\n", sum);

    return 0;
}