#include <bits/stdc++.h>
using namespace std;
int n,m;
int main(){
    cin>>n>>m;
    int cnt=0;
    for(int i=1;i<=n;i++){
        string s(m,'.');
        if(i%2==1){
            for(int j=0;j<n;j++){
                s[j]='#';
            }
        }
        else{
            if(cnt%2==0){
                s[1]='#';
            }
            else{
                s[m]='#';
            }
        }
    }
}