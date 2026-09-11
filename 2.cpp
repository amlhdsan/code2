#include <stdio.h>
#include <stdlib.h>

int main() {
    // printf("Hello, World!\n");
    unsigned long n, max;
    scanf("%lu,%lu", &n, &max);
    unsigned long sum = 0;
    unsigned long factorial = 1;
    for (unsigned long i = 1; i <= n; i++) {
        factorial *= i;
        if (sum + factorial > max) {
            printf("overflow at %lu!\n", i);
            return 0;
        }
        sum += factorial;
    }
    printf("%lu\n", sum);

    return 0;
}