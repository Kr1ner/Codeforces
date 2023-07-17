#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t,n,k,a[30];
    a[0]= 1;
    for(int i =1; i<= 30; i++){
        a[i] = a[i - 1] * 2;
    }
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(k < 30){
            cout<<min(n+1,a[k])<<endl;
        }
        else{
            cout<<n+1<<endl;
        }
    }
}