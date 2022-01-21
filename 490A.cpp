#include <bits/stdc++.h>
using namespace std;
int n,r,s,d,mn,p[3];
int main()
{
    cin>>n;
    int a[n], a1[n],a2[n],a3[n];
    for(int i=1;i<=n;i++){
       cin>>a[i];
    }
    for(int i=1;i<=n;i++) {
        if(a[i]==1){
            p[1]++; 
            a1[p[1]]=i; 
        } 
        else if(a[i]==2){
            p[2]++; a2[p[2]]=i; 
        } 
        else  { 
            p[3]++; 
            a3[p[3]]=i; }  
    }
    mn=p[1];
    if(mn>p[2]){
        mn=p[2];   
    }
    if(mn>p[3]) {
        mn=p[3];
    }
    cout<<mn<<endl;
    if(mn!=0)
    {
        for(int i=1;i<=mn;i++) 
        cout<<a1[i]<<" "<<a2[i]<<" "<<a3[i]<<endl; 
    }
}