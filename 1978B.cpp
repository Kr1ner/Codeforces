#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long int n, a, b;
    cin >> n >> a >> b;
    long long int leftit = 1, rightit = min(n, b);
    long long i = 0;
    while (leftit <= rightit) {
      long long int midit = (rightit + leftit) / 2;
      if (b - midit + 1 == a) {
        i = midit;
        break;
      }
      if (b - midit + 1 > a) {
        leftit = midit + 1;
      } else {
        rightit = midit - 1;
      }
    }
    cout << i * (2 * b - i + 1) / 2 + (n - i) * a << endl;
  }
}
