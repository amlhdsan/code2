#include <bits/stdc++.h>

#define N 200010
#define int long long

using namespace std;

int n, c;
int a[N];
int ans = 0;

signed main() {

    cin >> n >> c;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    sort(a + 1, a + n + 1);

    for(int i = 1; i <= n; ++i) {
        int t = a[i] - c;

        int l = lower_bound(a + 1, a + n + 1, t) - a;
        int r = upper_bound(a + 1, a + n + 1, t) - a;

        ans += (r - l);
    }

    cout << ans;
    
    return 0;
}