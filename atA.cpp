#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    int f[5] = {0, 3, 1, 4, 2};
    // f[1] = 3;
    // f[2] = 1;
    // f[3] = 4;
    // f[4] = 2;

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            int x;
            cin >> x;
            cout << f[x] << (j == N ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}