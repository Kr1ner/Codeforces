#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <queue>
#include <vector>
#include <stack>
#include <set>
#include <map>
#include <cctype>
#define eps 1e-8
#define INF 0x3f3f3f3f
#define MOD 1e9+7
#define PI acos(-1)
#define lson l,mid,rt<<1
#define rson mid+1,r,rt<<1|1
#define CLR(x,y) memset((x),y,sizeof(x))
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int seed = 131;
const int maxn = 1e5 + 5;
char a[maxn];
char s[maxn];
unordered_map<ull, int>mp;
vector<int>v;
ull h[3][maxn], p[maxn];
ull get_has(int flag, int l, int r) {
    return h[flag][r] - h[flag][l - 1] * p[r - l + 1];
}
int main() {
	
    p[0] = 1;
    for(int i = 1; i <= 1e5; i++) p[i] = p[i - 1] * seed;
    scanf("%s%s", a + 1, s + 1);
    int lena = strlen(a + 1);
    int lens = strlen(s + 1);
    for(int i = 1; i <= sqrt(lena); i++) {
        if(lena % i == 0) {
            if(lens % i == 0)v.push_back(i);
            if(lens % (lena / i) == 0 && i != lena / i) v.push_back(lena / i);
        }
    }
    for(int i = 1; i <= lena; i++) h[1][i] = h[1][i - 1] * seed + a[i];
    for(int i = 1; i <= lens; i++) h[2][i] = h[2][i - 1] * seed + s[i];
    int ans = 0;
    for(int i = 0; i < v.size(); i++) {
        int num = v[i];
        int flag = 1;
        ull STD = get_has(1, 1, num);
        int cas = lena / num;
        for(int j = 0; j < cas; j++) {
            ull my = get_has(1, j * num + 1, (j + 1) * num);
            if(my != STD) flag = 0;
        }
        cas = lens / num;
        for(int j = 0; j < cas; j++) {
            ull my = get_has(2, j * num + 1, (j + 1) * num);
            if(my != STD) flag = 0;
        }
        if(flag) ans++;
    }
    printf("%d\n", ans);
    return 0;
}
