#include <bits/stdc++.h>
using namespace std;

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

inline void solve() {
    int a[4];
    a[1] = read();
    a[2] = read();
    a[3] = read();

    sort(a + 1, a + 4);

    if(a[1] == a[2] || a[2] == a[3] || a[1] == a[3]) {
        writeln(0);
    } else {
        writeln(min(a[2] - a[1], a[3] - a[2]));
    }
}

int main() {

    int t = read();

    while(t--) {
        solve();
    }
    

    return 0;
}