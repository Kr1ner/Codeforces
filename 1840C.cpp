#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,td=0;
        long long int q;
        cin>>n>>k>>q;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]<=q){
                td++;
            }
        }
        if(td==k){
         cout<<1<<endl;
        }
        else if(td!=k && td!=0 &&k!=0){
        int min,minfac=1,tdfac=1,kfac=1;
        min=(td-k);
        for(int i =1;i<min;i++){
            minfac*=i;
        }
        for(int i =1;i<td;i++){
            tdfac*=i;
        }for(int i =1;i<k;i++){
            kfac*=i;
        }
        cout<<tdfac/(kfac*minfac)<<endl;                                                 
        }
        else{cout<<0<<endl;}
    }
}