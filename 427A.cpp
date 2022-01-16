#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin>>n;
    int x[n],i=1;
    cin>>x[0];
    int crm = 0,rec = 0;
    if(x[0]==-1){
        crm=1;
    }
    else{
        rec++;
    }
    while(n--){
        cin>>x[i];
        if(x[i]==-1){
            if(rec>0){
                rec--;
            }
            else{
                crm++;
            }
        }
        else{
            rec++;
        }
    }
    cout<<crm;
}