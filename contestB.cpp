#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
int z;
cin>>z;
while(z--){
	int n;
	cin>>n;
	int a,b;
	cin>>a>>b;
	int aa[n+1];
	vector<int> v;
	vector<int> v1;
	for(int i=1; i<=n; i++){
		if(i==a || i==b){
			continue;
		}
		v.push_back(i);
	}
	bool tru1=true;
	for(int i=1; i<=n/2; i++){
		if(i==1){
			aa[1]=a;
				
		}else{
			aa[i]=v[v.size()-1];
			if(v[v.size()-1]<a){
				tru1=false;
			}
			v.pop_back();
		}
	}
	bool tru2=true;
	for(int i=n/2+1; i<=n; i++){
		if(i==n/2+1){
		 aa[i]=b;
		}else{
			aa[i]=v[v.size()-1];
				if(v[v.size()-1]>b){
				tru2=false;
				}
			v.pop_back();
		}
	}
	if(tru1==false || tru2==false){
		cout<<"-1"<<endl;
		continue;
	}else{
		for(int i=1; i<=n; i++){
			cout<<aa[i]<<" ";
			
		}
		cout<<endl;
	}
}
}
