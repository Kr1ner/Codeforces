#include <bits/stdc++.h>
using namespace std;
string s,s1;

int main(){
    cin>>s>>s1;
    for(int i=0;i<s.size();i++){
        if(s[i]<92){
            s[i]+=32;
        }
        if(s1[i]<92){
            s1[i]+=32;
        }
    }
    if(s<s1){
        cout<<-1;
    }
    else if(s>s1){
        cout<<1;
    }
    else if(s==s1){
        cout<<0;
    }
}