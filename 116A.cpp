#include <bits/stdc++.h>
using namespace std;
int n,ans,cap;

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        int a,b;
        cin>>a>>b;
        ans+=b;
        ans-=a;
        cap=max(cap,ans);
    }
    cout<<cap;
}