#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t){
    t--;
    int n;
    string a;
    cin>>n;
    cin>>a;
    int m;
    cin>>m;
    string b,c;
    cin>>b;
    cin>>c;
    string ans;
    for(int i = 1 ; i < m;i++){
      if(c[i]=="V"){
        ans+=b[i];
      }
    }
    ans+=a;
    for(int i = 1 ; i < m;i++){
      if(c[i]=="D"){
        ans+=b[i];
      }
    }
    cout<<ans<<endl;
  }
}
