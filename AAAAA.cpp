#include <bits/stdc++.h>

using namespace std;

#define ll long long 
#define N 1000010
#define MID ((l + r) >> 1)
#define ls (p << 1)
#define rs (p << 1 | 1)
#define mid ((l + r) >> 1)
#define PII pair<int, int>
#define MAX(x, y, z) max((x), max((y), (z)))
#define PRI priority_queue
#define MOD 1000000007
#define FI first
#define SE second
#define IL inline
#define RE register
#define MINN -0x7fffffff
#define MAXX 0x7fffffff
#define HMINN -0x3f3f3f3f
#define HMAXX 0x3f3f3f3f
#define ENDL putchar('\n')

IL int read() {
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

IL void write(ll x) {
    if(x < 0) {
        putchar('-');
        x = -x;
    }
    if(x > 9)
        write(x / 10);
    putchar(x % 10 + '0');
}

int a[N];
int c[N];

class DreamData {
private:
    int tree[N << 2];
    int lazy[N << 2];

    IL void upd(int p) {
        tree[p] = min(tree[ls], tree[rs]);
    }

    IL void pushd(int p) {
        if(lazy[p]) {
            tree[ls] -= lazy[p];
            tree[rs] -= lazy[p];
            lazy[ls] += lazy[p];
            lazy[rs] += lazy[p];
            lazy[p] = 0;
        }
    }

public:
    IL void build(int p, int l, int r) {
        lazy[p] = 0;
        if(l == r) {
            tree[p] = c[l];
            return;
        }
        build(ls, l, mid);
        build(rs, mid + 1, r);
        upd(p);
    }

    IL void update(int p, int l, int r, int ql, int qr, int val) {
        if(ql <= l && r <= qr) {
            tree[p] -= val;
            lazy[p] += val;
            return;
        }
        pushd(p);
        if(ql <= mid) update(ls, l, mid, ql, qr, val);
        if(qr > mid) update(rs, mid + 1, r, ql, qr, val);
        upd(p);
    }

    IL int query(int p, int l, int r, int ql, int qr) {
        if(ql <= l && r <= qr) return tree[p];
        pushd(p);
        int res = HMAXX;
        if(ql <= mid) res = min(res, query(ls, l, mid, ql, qr));
        if(qr > mid) res = min(res, query(rs, mid + 1, r, ql, qr));
        return res;
    }
};

// DreamData st;

int main() {

    int n = read(), k = read();
    int mmyb = 0;
    
    for(RE int i = 1; i <= n; ++i) {
        a[i] = read();
        mmyb = max(mmyb, a[i]);
        c[a[i]]++;
    }
    
    if(mmyb < 2 * k + 1) {
        write(0);
        ENDL;
        return 0;
    }
    
    st.build(1, 1, mmyb);
    
    ll ans = 0;
    
    for(RE int i = mmyb - 2 * k; i >= 1; --i) {
        int m = st.query(1, 1, mmyb, i, i + 2 * k);
        if(m > 0) {
            // ans += m * (i + k);
             ans += 1LL * m * (i + k);
            st.update(1, 1, mmyb, i, i + 2 * k, m);
        }
    }
    
    write(ans);
    ENDL;
    
    return 0;
}