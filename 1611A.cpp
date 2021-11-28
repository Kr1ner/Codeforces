#include <bits/stdc++.h>
#define pb push_back
#define f first
#define s second
 
using namespace std;
 
int n;
int fix;
string s;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        fix = 0;
        cin >> s;
        for ( int i = 0; i < s.length(); i++ ) {
            if ( (s[i] - '0') % 2 == 0 ) {
                fix = 1;
                break;
            }
        }
        
        if ( fix == 0 ) {
            cout << -1 << endl;
            continue;
        }
        
        if ( s[s.length() - 1] % 2 == 0 ) {
            cout << 0 << endl;
            continue;
        }
        
        if ( s[0] % 2 == 0 ) {
            cout << 1 << endl;
            continue;
        }
        
        cout << 2 << endl;
    }
}
