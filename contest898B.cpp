#include <bits/stdc++.h>
using namespace std;
long long int n,a,b;
int a1,b1;

int main(){
    cin>>n>>a>>b;
    a1=n%a;
    b1=n%b;
    if(a1==0)
    {
        cout<<"YES"<<endl<<n/a<<0;
        return 0;
    }
    else if(b1==0)
    {
        cout<<"YES"<<endl<<0<<n/b;
        return 0;
    }
    else if((n-a1)%b==0 || (n-a1)%b==0)
    {
        cout<<"YES"<<(n-b1)/a<<(n-(n-a1))/b;
    }
    else
    {
        cout<<"NO";
    }
}
