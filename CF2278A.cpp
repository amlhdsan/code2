#include <iostream>
using namespace std;

int T;
int n, m;
int a[27], b[27];

inline void solve() {
    cin >> n >> m;

    string s, t;
    cin >> s >> t;

    for(int i = 0; i < 27; i++) {
        a[i] = b[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        a[s[i] - 'a']++;
    }

    for(int i = 0; i < m; i++) {
        b[t[i] - 'a']++;
    }

    for(int i = 0; i < 27; i++) {
        a[i] -= b[i];
    }

    if(a['s' - 'a'] != 1) {
        cout << "NO" << endl;
        return;
    }
    if(a['i' - 'a'] != 1) {
        cout << "NO" << endl;
        return;
    }
    if(a['x' - 'a'] != 1) {
        cout << "NO" << endl;
        return;
    }

    for(int i = 0; i < 27; i++) {
        if(i == 's' - 'a' || i == 'i' - 'a' || i == 'x' - 'a') {
            continue;
        }
        if(a[i] != 0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {

    cin >> T;

    while(T--) {
        solve();
    }

    return 0;
}