#include <bits/stdc++.h>
using namespace std;
int n,h,counter;

int main(){
    cin>>n>>h;
    int a[n];
    int i=0;
    while(n--){
        cin>>a[i];
        if(a[i]>h){
            counter+=2;
        }
        else{
            counter++;
        }
        i++;
    }
    cout<<counter;
}