#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int bra[k], bot[k];
    for (int i = 0; i < k; i++) {
      cin >> bra[i] >> bot[i];
    }
    int arr[k];
    for (int i = 0; i < k; i++) {
      arr[bra[i]] += bot[i];
    }
    sort(arr.begin(), arr.end());
    int sum;
    int iterat = 0;
    while (n--) {
      sum += arr[iterat];
      iterat++;
    }
    cout << sum << endl;
  }
}
