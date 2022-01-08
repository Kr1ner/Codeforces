#include <bits/stdc++.h>
using namespace std;
int t;

int main(){
    cin>>t;
    while(t--){
        int n,l,r,k,counter=0;
        cin>>n>>l>>r>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a , a+n);
        for(int i=0;i<n;i++){
            if(a[i]>=l && a[i]<=r && k-a[i]>=0){
                counter++;
                k-=a[i];
            }
        }
        cout<<counter<<endl;
    }
}