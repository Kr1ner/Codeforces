#include <bits/stdc++.h>
using namespace std;
int n,counter=0;
int main(){
    cin>>n;
    while(n>=100){
        n-=100;
        counter++;
    }
    while(n>=20){
        n-=20;
        counter++;
    }  
    while(n>=10){
        n-=10;
        counter++;
    }  
    while(n>=5){
        n-=5;
        counter++;
    }  
    while(n>0){
        n-=1;
        counter++;
    }
    cout<<counter;
}