#include<bits/stdc++.h>
using namespace std;
int t;
double a,b;
long long p1,p2;
int main()
{   
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>a>>p1;
		cin>>b>>p2;
		if(p1>=p2)
		{
			p1=p1-p2;
			p2=0;
		}
		else
		{
			p2=p2-p1;
			p1=0;
		}
		a=a*pow(10,p1);
		b=b*pow(10,p2);
		cout<<b;
		if(a>b) cout<<'>'<<endl;
		else if(a<b) cout<<'<'<<endl;
		else cout<<'='<<endl;
	}
	return 0;
} 
