#include <bits/stdc++.h>
using namespace std;
string s;
int counter=0;

int main(){
    cin>>s;
    string t="hello";
    for(int i=0;i<s.size();i++){
        if(s[i]==t[counter]){
            counter++;
        }
        if(counter==5){
            break;
        }
    }
    if(counter==5){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}