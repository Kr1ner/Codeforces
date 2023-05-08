#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],sum=0,ans=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]==0){
                sum++;
            }
            else{
                ans = max(ans,sum);
                sum=0;
            }
        }
        cout<<max(sum,ans)<<endl;
    }
}