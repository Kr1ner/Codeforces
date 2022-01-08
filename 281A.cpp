#include <bits/stdc++.h>
using namespace std;
string s;

int main(){
    cin>>s;
    if(s[0]<97){
        cout<<s;
    }
    else{
        s[0]-=32;
        cout<<s;
    }
}