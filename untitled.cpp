#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if(a == 0) {
        return b;
    }
    else {
        return gcd(b, a % b);
    }
} 

int main() {

    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d", gcd(a, b));


    return 0;
}