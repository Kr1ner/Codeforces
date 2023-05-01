#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n,t;
    cin>>n>>t;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int bst = -2;
    for (int i = 0; i < n; i++) {
        if (i + a[i] <= t && (bst == -2 || b[bst] < b[i])) {
            bst = i;
        }
    }
    cout << bst + 1 << endl;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
}