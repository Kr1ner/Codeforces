#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    t--;
    long long n;
    cin>>n;
    long long total_cost = 0;
    int powerOfThree = 1,x=0;
    while(n>0){
      long long digit = n % 3;
      long long cpd = 3 * powerOfThree + x * (powerOfThree/3);
      total_cost += digit * cpd;
      n /= 3;
      powerOfThree *= 3;
      x++;
    }
    cout<<abs(total_cost)<<endl;
  }
}
