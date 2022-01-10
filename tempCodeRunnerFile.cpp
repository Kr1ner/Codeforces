#include <bits/stdc++.h>
using namespace std;
int n,m,counter;
int main(){
    cin>>n>>m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin>>a[i];
    }
    counter = a[0];
    for (int i = 1; i < m; i++)
    {
        if(a[i]>a[i+1]){
            counter+=m-(a[i]-a[i+1]);
        }
        else if(a[i]<a[i+1]){
            counter+=a[i+1]-a[i];
        }
    }
    cout<<counter;
}