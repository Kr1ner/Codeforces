#include <bits/stdc++.h>
using namespace std;
int s,n;
int main(){
    cin>>s>>n;
    pair <int,int> drag_stats[n];
    for (int i = 0; i < n; i++){
        cin>>drag_stats[i].first>>drag_stats[i].second;
    }
    sort(drag_stats,drag_stats+n);
    for (int i = 0; i < n; i++)
    {
       if(s<=drag_stats[i].first){
           cout<<"NO";
           return 0;
       }
       else{
           s+=drag_stats[i].second;
       }
    }
    cout<<"YES";
}