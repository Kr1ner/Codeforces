#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        string a;
        int sw = 0;
        for(int i =0;i<n-1;i++){
            if(s[i]==s[sw]){
                a+=s[i];
                while(s[i+1]!=s[sw]){
                    i++;
                }
                sw=i+2;
                i++;
            }
        }
        cout<<a<<endl;
    }
}