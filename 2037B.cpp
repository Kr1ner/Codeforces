#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int k;
    cin >> k;
    int arr[k];
    for (int i = 0; i < k; i++) {
      cin >> arr[i];
    }
    for (int i = 0; i < k; i++) {
      for (int j = 0; j < k; j++) {
        if ((arr[i] * arr[j] == k - 2) && (j != i)) {
          cout << arr[i] << arr[j] << endl;
        }
      }
    }
  }
}
