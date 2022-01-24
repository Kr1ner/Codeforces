#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        int i=0;
        while(k--){
            a[i] = max(a[i],b[n - i - 1]);
            i++;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
}