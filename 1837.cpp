#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int ans=1;
        int con=1;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]) con=1;
            else con++;
            ans=max(con,ans); 
        }
        cout<<ans+1<<endl;
    }
}
