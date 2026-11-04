#include <bits/stdc++.h>

#define N 1010
#define M 1010

using namespace std;

int n, m, k;
int a[N][M];

inline int read() {
    int x = 0, f = 1;

    char ch = getchar();
    while(ch < '0' || ch > '9') {
        if(ch == '-') f = -1;
    }
    while(ch >= '0' && ch <= '9') {
        x = x * 10 + (ch - '0');
        ch = getchar();
    }
    return x * f;
}

int main() {

    cin >> n >> m >> k;

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            a[read()][j] = 1;
        }
    }



    return 0;
}