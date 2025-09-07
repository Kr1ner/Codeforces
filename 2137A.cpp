#include <bits/stdc++.h>
using namespace std;

bool dfs(int x, int k, int &res) {
    if (k == 0) {
        res = x;
        return true;
    }
    if (dfs(x * 2, k - 1, res)) return true;

    if ((x - 1) % 3 == 0) {
        int prev = (x - 1) / 3;
        if (prev % 2 == 1) {
            if (dfs(prev, k - 1, res)) return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int k, x;
        cin >> k >> x;
        int res = -1;
        dfs(x, k, res);
        cout << res << "\n";
    }
    return 0;
}
