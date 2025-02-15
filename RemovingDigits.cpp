#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define useti unordered_set<int>
#define umapi unordered_map<int,int>
#define mseti multiset<int>
#define rep(i,start,stop) for(int i=start;i<stop;i++)
signed main()
{
    int n;
    cin>>n;
    vi dp(n+1,INT_MAX);
    dp[0]=0;//base case for 0 number of ways=0
    for(int i=1;i<=n;i++)
    {
        string s=to_string(i);
        for(char c:s)
        {
            int digit=c-'0';
            if(digit!=0)
            dp[i]=min(dp[i],dp[i-digit]+1);
        }
    }
    cout<<dp[n]<<endl;
}