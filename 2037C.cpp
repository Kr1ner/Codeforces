#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    if (n == 2 || n == 3 || n == 4) {
      cout << -1 << '\n';
      continue;
    }
    cout << "1 3 ";
    for (int i = 7; i <= n; i += 2)
      cout << i << " ";
    cout << "5 4 2 ";
    for (int i = 6; i <= n; i += 2)
      cout << i << " ";
    cout << '\n';
  }
}
