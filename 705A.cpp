#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin>>n;
    for(int i=1;i<=n-1;i++){
        if(i%2==1){
            cout<<"I hate that ";
        }
        else{
            cout<<"I love that ";
        }
    }
    if(n%2==1){
        cout<<"I hate it";
    }
    else{
        cout<<"I love it";
    }
}