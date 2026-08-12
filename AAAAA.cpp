#include <bits/stdc++.h>

#define N 1000100

using namespace std;


int n, k;
int a[N];
int tag[N];

inline int read() {
    int x = 0, f = 1;
    char ch = getchar();
    while(ch < '0' || ch > '9') {
        if(ch == '-') {
            f = -1;
        }
        ch = getchar();
    }
    while(ch >= '0' && ch <= '9') {
        x = (x << 3) + (x << 1) + (ch ^ 48);
        ch = getchar();
    }
    return x * f;
}

inline void write(int x) {
    if(x < 0) {
        putchar('-');
        x = -x;
    }
    if(x > 9)
        write(x / 10);
    putchar(x % 10 + '0');
}

inline void writeln(int x) {
    write(x);
    putchar('\n');
}

inline void build(int p, int l, int r) {
    if(l == r) {
        
    }
}

int main() {

    // int n, k;

    n = read();
    k = read();

    for(int i = 1; i <= n; ++i) {
        a[i] = read();
    }


    sort(a + 1, a+ n + 1);


    

    return 0;
}