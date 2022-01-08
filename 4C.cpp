#include <bits/stdc++.h>
using namespace std;
int n;
map <string,int> usr;
int main(){
    cin>>n;
    for (int i=0 ; i<n ;i++){
        string x;
        cin>>x;
        if(usr[x]==0){
            cout<<"OK"<<endl;
            usr[x]=1;
        }
        else{
            cout<<x<<usr[x]<<endl;
            usr[x]++;
        }
    }
}