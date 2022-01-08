#include <bits/stdc++.h>
using namespace std;
int s,n;
int main(){
    cin>>s>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        if(s<=x){
            cout<<"NO";
            return 0;
        }
        else{
            s+=y;
        }
    }
    cout<<"YES";
}