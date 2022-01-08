#include<bits/stdc++.h>
using namespace std;
string s;
int D=0,A=0,n;
int main()
{
    cin>>n;
    cin>>s;
     for(int i=0; i<n; i++){
        if(s[i]=='A'){A++;}
        if (s[i]=='D'){D++;}
}
    if(A>D){
	    cout<<"Anton";
	}
    else if(A<D){
	    cout<<"Danik";
	}
	else{
	    cout<<"Friendship";
	}
}
