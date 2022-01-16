#include <bits/stdc++.h>
using namespace std;
int t;
int main() {
	cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        if (n%4!=0){
            cout<<"NO";
        }
        else {
            cout<<"YES"<<endl;
            int p = 2;
            for (int i=0;i<n/2;i++){
                cout<<p<<" ";
                arr[i]=p;
                p+=4;
            }
            for (int i=0;i<n/4;i++ ){
              cout<<arr[i]-1<<" ";
            }
            for( int i = n / 4; i < n / 2; i++ ){
              cout<<arr[i]+1<<" ";
            }
        }
        cout << endl;
    }
}