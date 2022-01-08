#include <bits/stdc++.h>
using namespace std;
string s;
int counter,counter1;

int main(){
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[]){
            counter++;
        }
        else{
            counter1++;
        }
    }
    if(max(counter,counter1)==counter){
        for(int i=0;i<s.size();i++){
            if(int(s[i])<97){
                s[i]=toupper(s[i]);
            }
        }
    }
    else if(max(counter,counter1)==counter){
        for(int i=0;i<s.size();i++){
            if(int(s[i])>=97){
                s[i]=tolower(s[i]);
            }
        }
    }
    else if(counter==counter1){
        for(int i=0;i<s.size();i++){
            if(int(s[i])<97){
                s[i]=tolower(s[i]);
            }
        }
    }
    cout<<s;
}