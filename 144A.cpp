#include <bits/stdc++.h>
using namespace std;
int mx,in,n,k,g,b;
int main()
{
    cin>>n;
    int a[n];
    for(k=1;k<=n;k++){
        cin>>a[k];
        if(a[k]>mx){ 
            mx=a[k];
            in=k;
        }
    }
    if(in!=1){
        for(k=in;k>1;k--){
            b=a[k-1]; 
            a[k-1]=a[k]; 
            a[k]=b; g++; 
        }
    }
    for(k=1;k<=n;k++){
        if(a[k]<=mx){ 
            mx=a[k]; 
            in=k; 
        }
    }
    if(in!=n){
        for(k=in;k<n;k++){
            b=a[k]; 
            a[k]=a[k+1]; 
            a[k+1]=b; 
            g++; 
        }
    }
    cout<<g;         
}