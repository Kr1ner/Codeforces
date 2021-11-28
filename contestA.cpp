#include <bits/stdc++.h>
using namespace std;
int x , y;

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> x >> y;
        if ((x+y) % 2 == 1 ) {
            cout << "-1 -1" << endl;
            continue;
        }
        else {
            if (max(x,y) == x ) {
                cout << (x+y) / 2 << " " << 0 << endl;
            }
            else { 
                cout << 0 << " " << (x+y) / 2 << endl;
            }
        }
    }
}
