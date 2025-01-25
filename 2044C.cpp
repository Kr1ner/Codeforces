#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int m, a, b, c;
    cin >> m >> a >> b >> c;
    int msans = 0, msansa, msansb;
    msansa = min(m, abs(a - m));
    msansb = min(m, abs(b - m));
    msans += msansa + msansb + min(2 * m - msansa - msansb, c);
    cout << msans << endl;
  }
}
