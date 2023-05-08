#include <bits/stdc++.h>
using namespace std;
int main(){
    string inp,cf="codeforces";
    int t;
    cin>>t;
    while(t--){
        cin>>inp;
        int sum=0;
        for(int i=0;i<inp.length();i++){
            if(inp[i]!=cf[i]){
                sum++;
            }
        }
        cout<<sum;
    }
}