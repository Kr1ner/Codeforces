#include <bits/stdc++.h>
using namespace std;
int p[5][5],step;

int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>p[i][j];
            if(p[i][j]==1){
            	step=abs(i-3)+abs(j-3);
            }
        }
    }
    cout<<step;
}
