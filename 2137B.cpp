#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t){
    t--;
    long long n;
    cin>>n;
    for(long long i = 1;i<=n;i++){
      long long p;
      cin >> p;
      cout<<(n+1-p)<<" \n"[i==n];
    }
  }
}
