#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << 1 + (a + b == c - b) + (c - b == d - c || d - c == a + b) << endl;
  }
}
