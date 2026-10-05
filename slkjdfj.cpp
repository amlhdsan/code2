#include <stdio.h>
#include <math.h>
int n;
int main() {
    
    scanf("%d", &n);

    double eps = pow(10.0, -n);
    double pi = 0.0;
    double p16 = 1.0;

    for (int k = 0; ; ++k) {
        double bi = (4.0 / (8 * k + 1) - 2.0 / (8 * k + 4) - 1.0 / (8 * k + 5) - 1.0 / (8 * k + 6)) / p16;
        pi += bi;
        if (bi < eps) {
            break;
        }
        p16 *= 16.0;
    }

    printf("pi=%.*f\n", n, pi);
    return 0;
}
