#include <bits/stdc++.h>

#define N 100010
#define int long long
#define ls (p << 1)
#define rs (p << 1 | 1)
#define mid ((l + r) >> 1)

using namespace std;

int n, m;
int a[N];
int tree[N << 2];
int lazy[N << 2];
int siz[N << 2];

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
    if(x > 9) {
        write(x / 10);
    }
    putchar(x % 10 + '0');
}

inline void writeln(int x) {
    write(x);
    putchar('\n');
}

inline void pushd(int p) {
    tree[ls] += lazy[p] * siz[ls];
    tree[rs] += lazy[p] * siz[rs];

    lazy[ls] += lazy[p];
    lazy[rs] += lazy[p];

    lazy[p] = 0;

    return;
}

inline void upd(int p) {
    tree[p] = tree[ls] + tree[rs];
}

inline void build(int p, int l, int r) {
    if(l == r) {
        tree[p] = a[l];
        siz[p] = 1;
        return;
    }
    build(ls, l, mid);
    build(rs, mid + 1, r);
    siz[p] = siz[ls] + siz[rs];
    upd(p);
    return;
}

inline void mdf(int p, int l, int r, int ql, int qr, int x) {
    if(ql <= l && r <= qr) {
        tree[p] += 1ll * siz[p] * x;
        lazy[p] += x;
        return;
    }
    pushd(p);
    if(ql <= mid) {
        mdf(ls, l, mid, ql, qr, x);
    }
    if(qr > mid) {
        mdf(rs, mid + 1, r, ql, qr, x);
    }
    upd(p);
    return;
}

inline int qry(int p, int l, int r, int ql, int qr) {
    if(ql <= l && r <= qr) {
        return tree[p];
    }
    pushd(p);
    int ans = 0;
    if(ql <= mid) {
        ans += qry(ls, l, mid, ql, qr);
    }
    if(qr > mid) {
        ans += qry(rs, mid + 1, r, ql, qr);
    }
    return ans;
}

signed main() {

    n = read();
    m = read();

    for(int i = 1; i <= n; ++i) {
        a[i] = read();
    }

    build(1, 1, n);

    while(m--) {
        int opt, x, y, k;
        opt = read();
        x = read();
        y = read();
        if(opt == 1) {
            k = read();
            mdf(1, 1, n, x, y, k);
        }
        else {
            writeln(qry(1, 1, n, x, y));
        }
    }

    return 0;
}