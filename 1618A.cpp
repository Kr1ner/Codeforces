#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	for(int j=0;j<t;j++){
		int b[10];
		for(int i=0; i<7; i++){
			cin>>b[i];
		}
		cout<<b[0]<<" "<<b[1];
		if(b[2]==b[0]+b[1]){
			cout<<" "<<b[3];
		}else{
			cout<<" "<<b[2];
		}
		cout<<endl;
	}
}
