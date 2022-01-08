#include <bits/stdc++.h>
using namespace std;
int n,counter;

int main(){
     cin>>n;
     int h[n],g[n];
     for(int i=0;i<n;i++){
         cin>>h[i]>>g[i];
     }
     for(int i=0;i<n-1;i++){
         int n1=n-1-i,i1=i+1;
         while(n1--){
             if(h[i]==g[i1]){
                 counter++;
             }
             i1++;
         }
     }
     for(int i=0;i<n-1;i++){
         int n1=n-1-i,i1=i+1;
         while(n1--){
             if(h[i1]==g[i]){
                 counter++;
             }
             i1++;
         }
     }
     cout<<counter;
}