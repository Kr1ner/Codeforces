#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int diff = INT_MAX;
        bool SORTED=true;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(abs(arr[i]-arr[j])<diff){
                    diff = abs(arr[i]-arr[j]);
                }
            }
            if(arr[i]>arr[i+1]){
                SORTED=false;
            }
        }
        if(SORTED){
            cout<<0;
        }
        if(!SORTED){
            cout<<diff/2;
        }
    }
}