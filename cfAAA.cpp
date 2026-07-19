#include <bits/stdc++.h>
using namespace  std;
#define int long long

inline int read() {
    int x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9') {
        if (ch == '-') f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9') {
        x = (x << 3) + (x << 1) + (ch ^ 48);
        ch = getchar();
    }
    return x * f;
}

inline void write(int x) {
    if (x < 0) {
        putchar('-');
        x = -x;
    }
    if (x > 9) write(x / 10);
    putchar(x % 10 + '0');
}

inline void writeln(int x) {
    write(x);
    putchar('\n');
}

char s[200005];

inline void solve() {
    int n = read(), k = read();
        scanf("%s", s + 1);
        if (n < (k << 1)) {
            writeln(-1);
            // continue;
            return;
        }
        int ans = 0;
        for (int i = 1; i <= k; i++)
            if (s[i] == 'L') ans++;
        for (int i = n - k + 1; i <= n; i++)
            if (s[i] == 'R') ans++;
        writeln(ans);
}

signed main() {
    int T = read();
    while (T--) {
        solve();
    }
    return 0;
}