/*#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,a,b;
        cin>>n>>a>>b;
        long long int numit=0,sum=0;
        for(int i=1;i<min(n,b);i++){
            if(b-i+1>a){
                sum+=b-i+1;
                numit++;
            }
        }
        cout<<sum+(n-numit)*a<<endl;
    }
}
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,a,b;
        cin>>n>>a>>b;
        long long int leftit=1,rightit=min(n,b);
        long long i=1;
        while(leftit<=rightit){
            long long int midit=(rightit+leftit)/2;
            if(b-midit+1==a){
                i = midit;
                break;
            }
            if(b-midit+1>a){
                leftit=midit+1;
            }
            else{
                rightit=midit-1;
            }
        }
        cout<<i<<endl;
        long long int sum=0;
        while(i--){
                sum+=b-i+1;
        }
        cout<<sum+(n-i)*a<<endl;
    }
}