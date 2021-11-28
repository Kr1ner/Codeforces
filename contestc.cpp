#include <bits/stdc++.h>
using namespace std;
long long int t1;

int main(){
	cin>>t1;
	for(int i=0;i<t1;i++){
		long long k1=0,x1=0;
		cin>>k1>>x1;
		if(x1==1){
			cout<<1<<endl;
		}
		else if(x1<(k1*(k1+1)/2) && x1>1){
			cout<<(sqrt(1+8*x1)-1)/2<<endl;
		}
		else if(x1>(k1*(k1+1)/2) && x1>1){
			cout<<int((sqrt(1+8*k1)-1)/2)+int((sqrt(1+8*k1)-1)/2)<<endl;
		}
	}
}
