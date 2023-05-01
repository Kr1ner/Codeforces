#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int ans = 2 *  (n * (n + 1)) / 2;
		ans += n; 
		ans += 4 * n;
		cout << ans << endl;
    }
}