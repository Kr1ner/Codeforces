#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<string,int> mp ;
        mp["00"] = mp["01"] = mp["10"] = mp["11"] = pow(10,9);
        int sum = pow(10,9);
        for(int i=0;i<n;i++){
            int m;
            string s;
            cin>>m>>s;
            mp[s] = min(mp[s],m);
        }
        if(mp["01"]!=0&&mp["10"]!=0){
            sum = mp["01"]+mp["10"];
        }
        sum = min(sum,mp["11"]);
        if(sum!=pow(10,9)){
            cout<<sum<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}