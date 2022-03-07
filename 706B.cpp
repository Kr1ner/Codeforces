#include <bits/stdc++.h>
using namespace std;
int n;

int main(){
    cin>>n;
    int p[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    sort(p,p+n);
    int q;
    cin>>q;
    int d[q];
    for(int i=0;i<q;i++){
        cin>>d[i];
    }
    for(int i=0;i<q;i++){
        int cnt=0;
        for(int j=0;d[i]>=p[j];j++){
            if(cnt<=q){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}