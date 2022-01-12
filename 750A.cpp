#include <bits/stdc++.h>
using namespace std;
int n,k,n1,tm;
int main(){
    cin>>n>>k;
    n1=1;
    int tm = 0;
    k = 240 - k;
    while(k-tm>=n1*5){
        if(n1<n){
            tm += n1 * 5;
            n1++;
        }
    }
    cout<<n1;
}