/*
*/


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
    int n = read();
    string a, b;
    cin >> a >> b;

    int ae = 0, ao = 0, be = 0, bo = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] == '1') {
            if ((i & 1) == 0) ++ae; 
            else ++ao;
        }
        if (b[i] == '1') {
            if ((i & 1) == 0) ++be; 
            else ++bo;
        }
    }

    if (ae == be && ao == bo) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {

    int t = read();

    while(t--) {
        solve();
    }
    
    if(t == 0) {
        
    }

    return 0;
}