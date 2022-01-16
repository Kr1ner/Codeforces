#include <bits/stdc++.h>
using namespace std;
int t;
#define lg length()
int main(){
    cin>>t;
	while(t--){
        string b;
		cin>>b;
		cout<<b[0];
		for(int i=1;i<b.lg;i+=2){
			cout<<b[i];
		}
		cout<<endl;
	}
}