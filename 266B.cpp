#include <bits/stdc++.h>
using namespace std;
string s;

int main(){
	int n,t;
	cin>>n>>t;
	cin>>s;
	for(int j=0;j<t;j++){
    	for(int i=1;i<=n;i++){
    		 if(s[i-1]=='B' && s[i]=='G'){
    		 	s[i]='B';
    		 	s[i-1]='G';
    		 	i++;
			 }
		}
	}
	cout<<s;
}
