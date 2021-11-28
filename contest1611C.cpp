#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1; i<=n; i++){
 
			cin>>a[i];
		//	cout<<a[i]<<" "<<i<<endl;
		}
		vector<int> v;
 
		if(a[1]!=n && a[n]!=n){
			cout<<"-1"<<endl;
 
			continue;
 
		}else if(a[1]==n){
			for(int i=n; i>=2; i++){
				v.pb(a[i]);
			//		cout<<v[i]<<" "<<i<<endl;
			}
				v.pb(a[1]);
		}else if(a[n]==n){
				for(int i=1; i<n; i++){
					//	cout<<v[i]<<" "<<i<<endl;
				v.pb(a[i]);
			}
				v.pb(a[n]);
		}
		for(int i=0; i<v.size(); i++){
			cout<<v[i]<<" ";
 
		}
		cout<<endl;
	}
}
