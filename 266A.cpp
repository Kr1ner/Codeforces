#include <bits/stdc++.h>
using namespace std;
string s;
int n,counter;

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        if(s[i]==s[i+1]){
            counter++;
        }
    }
    cout<<counter;
}