#include <bits/stdc++.h>
using namespace std;
string p;

int main(){
    cin>>p;
    for(int i=0;i<p.size();i++){
        if(p[i]=='H' ||p[i]=='Q' ||p[i]=='9'){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}