#include <bits/stdc++.h>
using namespace std;
int n,t;
int main(){
    cin>>n>>t;
    int a[n-1];
    for(int i=0; i<(n-1); i++)cin>>a[i];
    for(int i=0; i<(n-1); ){
        i=i+a[i];
        if ( i==(t-1) ) { cout<<"YES"<<endl; return 0;}
    }
    cout<<"NO"<<endl;
    return 0;
}
