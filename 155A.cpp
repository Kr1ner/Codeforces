#include <bits/stdc++.h>
using namespace std;
int max,n,cnt;
int main() {
    cin>>n;
    int x[n];
    cin>>x[0];
    int min = max = x[0];
    for (int i = 1; i < n; i++)
    {
        cin>>x[i];
        if(x[i]<min){
            min=x[i];
            cnt++; 
        }
		if(x[i]>max){
            max=x[i];
            cnt++;
        }
    }
    cout<<cnt;
}