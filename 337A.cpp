#include <bits/stdc++.h>
using namespace std;
int n,m,ans;
int main(){
    cin>>n>>m;
    int f[m];
    for(int i=1;i<=m;i++){
        cin>>f[i];
    }
    sort(f+1,f+m+1);
    ans=f[n]-f[1];
    for (int i=2;i<=m-n+1;i++)
      ans=min(ans,f[i+n-1]-f[i]);
    cout<<ans;
}