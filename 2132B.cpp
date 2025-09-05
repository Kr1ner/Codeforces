#include <bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin>>t;
        while(t){
                t--;
                long long n;
                cin >> n;
                
                vector<long long> suitable_x;
                long long power_of_10 = 10;
                
                for (int k = 1; k <= 18; ++k) {
                        long long divisor = 1 + power_of_10;
                        if (n % divisor == 0) {
                                long long x = n / divisor;
                                if (x * power_of_10 == n - x) {
                                    suitable_x.push_back(x);
                                }
                    }
                    power_of_10 *= 10;
                }
                sort(suitable_x.begin(),suitable_x.end());
                cout<<suitable_x.size();
                if(suitable_x.size()!=0) cout<<endl;
                for(auto it:suitable_x){
                        cout<<it<<" ";
                }
                cout<<endl;
        }
}

