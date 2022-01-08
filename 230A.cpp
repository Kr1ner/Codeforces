#include <bits/stdc++.h>
using namespace std;
int s,n;
int main(){
    cin>>s>>n;
    int x[n],y[n];
    for (int i = 0; i < n; i++){
        cin>>x[i]>>y[i];
    }
    sort(x,x+n);
    sort(y,y+n);
    for (int i = 0; i < n; i++)
    {
       if(s<=x[i]){
           cout<<"NO";
           return 0;
       }
       else{
           x+=y[i];
       }
    }
    cout<<"YES";
}