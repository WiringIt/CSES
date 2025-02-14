#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define useti unordered_set<int>
#define umapi unordered_map<int,int>
#define mseti multiset<int>
#define rep(i,start,stop) for(int i=start;i<stop;i++)
int mod=1e9+7;
int good(int n)
{
    if(n==1)return 0;
    return good(n-1)*n+pow(-1,n);
}
signed main()
{
    int n;
    cin>>n;
    vi dp(n+1,0);
    for(int i=2;i<=n;i++)
    dp[i]=(i*dp[i-1]+((i%2)?-1:1))%mod;
    cout<<dp[n]<<endl;
}