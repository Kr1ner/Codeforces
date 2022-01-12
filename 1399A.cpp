#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x[n];
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        sort(x,x+n);
        int h=0;
        for(int i=0;i<n;i++){
            if(x[i+1]-x[i]>1){
                cout<<"NO"<<endl;
                break;
            }
            else{
                h=1;
            }
        }
        if(h==1){
            cout<<"YES"<<endl;
        }
    }
}