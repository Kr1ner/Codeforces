#include <bits/stdc++.h>
using namespace std;
int n,counter=0;

int main(){
    cin>>n;
    while(n--){
        int p,q;
        cin>>p>>q;
        if((q-p)>=2){
            counter++;
        }
    }
    cout<<counter;
}