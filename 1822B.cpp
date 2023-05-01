#include<iostream>    
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        if(a[n-1]*a[n-2]>a[0]*a[1]){
            int sum = a[n-1]*a[n-2];
            cout<<sum<<endl;    
        }
        else{
            int sum = a[0]*a[1];
            cout<<sum<<endl;    
        }
    }
}