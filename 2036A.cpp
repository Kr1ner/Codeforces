#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    bool ans = true;
    for (int i = 0; i < n - 1; i++) {
      int dif;
      dif = max(arr[i], arr[i + 1]) - min(arr[i], arr[i + 1]);
      if (dif != 5 && dif != 7) {
        ans = false;
      }
    }
    if (!ans) {
      cout << "NO" << endl;
      continue;
    }
    cout << "YES" << endl;
  }
}
