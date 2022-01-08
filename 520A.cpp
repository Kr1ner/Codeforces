#include <bits/stdc++.h>
using namespace std;
int n;
string s;
set <char> p;

int main(){
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        p.insert(tolower(s[i]));
    }
    if(p.size()==26){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}