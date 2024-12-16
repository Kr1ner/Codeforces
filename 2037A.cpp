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
    if (n < 2) {
      cout << 0 << endl;
    } else if (n > 2) {
      sort(arr, arr + n);
      int count = 0;
      for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
          count++;
          i++;
        }
      }
      cout << count << endl;
    } else {
      if (arr[0] == arr[1]) {
        cout << 1 << endl;
      } else {
        cout << 0 << endl;
      }
    }
  }
}
