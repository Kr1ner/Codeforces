#include <bits/stdc++.h>
using namespace std;
int n,m,a,b;
int main(){
    cin>>n>>m>>a>>b;
    if (m * a <= b) cout<< n * a ;
    else cout<<(n/m)*b+min((n%m)*a,b);
}