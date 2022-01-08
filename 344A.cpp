#include <bits/stdc++.h>
using namespace std;
int n,ans=1;

int main(){
    cin>>n;
    char x[n],y[n];
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
        if(x[i]==y[i-1]) ans++;
    }
    cout<<ans;
}