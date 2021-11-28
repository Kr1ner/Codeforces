#include <bits/stdc++.h>
using namespace std;
int t;

int main(){
	cin>>t;
	for(int i=0;i<t;i++){
		int a,b;
		cin>>a>>b;
		cout << min(min(a , b) , (a + b) / 4) << endl;
	}
}
