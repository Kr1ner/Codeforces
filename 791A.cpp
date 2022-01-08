#include <bits/stdc++.h>
using namespace std;
int a,b,counter;

int main(){
    cin>>a>>b;
    while(a<=b){
        a=a*3;
        b=b*2;
        counter++;
    }
    cout<<counter;
}