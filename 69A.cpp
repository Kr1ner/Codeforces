#include <bits/stdc++.h>
using namespace std;
int n[100][100],t;

int main(){
    cin>>t;
    for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            cin>>n[i][j];
        }
    }
    for(int j=0;j<3;j++){
        int checker=0;
        for(int i=0;i<t;i++){
            checker+=n[i][j];
        }
        if(checker!=0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}