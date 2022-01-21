#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin>>n;
    int a[n],sum;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n<=1){
        cout<<0;
    }
    else{
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
            sum+=a[n-1]-a[i];
        }
        cout<<sum;
    }                                           
}