#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        map<char,int> mp;
        bool shuala = false;
        cin>>s;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<s.length();i++){
            if(i==s.length()/2+1 && mp[s[i]]==1){
                shuala = true;
            }
        }
        if(s.length()%2==0&&mp.size()%2==0&&mp.size()>=2&&s.length()>=4){
            cout<<"YES"<<endl;
        }
        else if( mp.size()>=3&&s.length()>=5&&s.length()%2==1){
            cout<<"YES"<<endl;
        }
        else if(mp.size()==2 && shuala){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}