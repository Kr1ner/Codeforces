#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k,i=0,cnt=1;
        cin>>n>>k;
        while(n-pow(2,i)>=0 && i<k){
            n=n-pow(2,i);
            i++;
            cnt+=i;
        }
        cout<<cnt<<endl;
    }
}