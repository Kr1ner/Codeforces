#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long int arr[n],sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            sum +=arr[i];
        }
        int j=0;
        int l=n;
        while(k--){
            if(arr[j]+arr[j+1]<=arr[l]){
                sum-=arr[j]-arr[j+1];
                j+=2;
            }else{
                sum-=arr[l];
                l--;
            }
        }
        cout<<sum<<endl;
    }
}