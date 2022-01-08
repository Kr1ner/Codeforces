#include <bits/stdc++.h>
using namespace std;
string s,t;

int main(){
	int n;
	cin>>s>>t;
	n = s.size()-1;
	for(int i=0;i<s.size();i++){
		if(s[i]!=t[n]){
			cout<<"NO";
			return 0;
		}
		n--;
	}
	cout<<"YES";
}
