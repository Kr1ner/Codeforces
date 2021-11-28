#include <bits/stdc++.h>
using namespace std;
string s;
int counter,counter1=1;

int main(){
	cin>>s;
	for(int i=0;i<s.size();i++){
		for(int j=0;j<i;j++){
			if(s[i]==s[j]){
				counter++;
			}
		}
		if(counter==0)
		{
			counter1++;
		}
		counter=0;
	}
	if(counter1%2==0){
		cout<<"IGNORE HIM!";
	}
	else{
		cout<<"CHAT WITH HER!";
	}
}
