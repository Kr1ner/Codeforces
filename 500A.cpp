#include <bits/stdc++.h>
using namespace std;
int n,t,ans;
int main(){
    cin>>n>>t;
    int a[n],t1=t-1;
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    int i=a[0]+1;
    while(t1--){
        i+=a[i];
        if(i==t){
            cout<<"YES";
            return 0;
        }
        else{
            ans=1;
        }
    }
    if(ans==1){
        cout<<"NO";
    }
}