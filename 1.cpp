#include <stdio.h>
#include <stdlib.h>

int a, b, c;

int main() {
    // printf("Hello, World!\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("NOT triangle\n");
    } else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        printf("right triangle\n");
    } else if (a == b && b == c) {
        printf("equilateral triangle\n");
    } else if (a == b || a == c || b == c) {
        printf("isosceles triangle\n");
    } else {
        printf("normal triangle\n");
    }

    return 0;
}