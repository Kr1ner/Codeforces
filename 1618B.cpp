/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
	int n;
	cin>>n;
	n=n-2;
	string s[n];
	char l;
	char r;
	int p=-1;
	for(int i=0; i<n; i++){
 
		cin>>s[i];
 
		if(i>0){
			l=s[i][0];
			if(l!=r){
 
				p=i;		
			}
		}
		r=s[i][1];
	}
	//cout<<s[i][1];
 
 
		if(p==-1){
		for(int i=0; i<n; i++){
			cout<<s[i][0];
 
		}
		cout<<s[n-1][1];
		cout<<"a";
		cout<<endl;
	}else{
 
		for(int i=0; i<n; i++){
			if(i==p){
 
				cout<<s[i-1][1];
			}
			cout<<s[i][0];
 
		}
		cout<<s[n-1][1];
		cout<<endl;
	}
}
}
