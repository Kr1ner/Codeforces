#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        int cnt=0;
        for(int i=0;i<n.length();i++){
            if(n[i]!='0') cnt++;
        }
        cout<<cnt<<endl;
        for(int i=0;i<n.length();i++){
            if(n[i]!='0'){
                cout<<n[i];
                for(int j=1;j<=n.length()-i-1;j++) cout<<0; 
                cout<<endl;
            }
        }
    }
}