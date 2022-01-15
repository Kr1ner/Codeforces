#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin>>n;
    if(n%2==0){
        cout<<n-8<<8;
    }
    else{
        cout<<9<<n-9;
    }
}