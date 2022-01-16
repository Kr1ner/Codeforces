#include <bits/stdc++.h>
using namespace std;
long long n,m,counter;
int main ()
{
	cin>>n>>m;
    int a[m];
	for (int i=1; i<=m; i++){
	    cin>>a[i];
    }
    int a1=1;
    for (int i=1; i<=m; i++){
        if (a[i]>a1) { 
            counter+=a[i]-a1;
            a1=a[i];
        }
        else if (a[i]<a1) {
            counter+=n-a1+a[i];
            a1=a[i];
        }
    }
    cout<<counter<<endl;
}