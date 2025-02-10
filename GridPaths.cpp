#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define useti unordered_set<int>
#define umapi unordered_map<int,int>
#define mseti multiset<int>
#define rep(i,start,stop) for(int i=start;i<stop;i++)
int mod=1e9+7;
vector<vector<char>>v;
int solve(int i,int j,vector<vector<int>>&dp)
{
 if(i<0 || j<0) return 0;
 if(v[i][j]=='*') return 0;
 if(i==0 && j==0) return 1;
 if(dp[i][j]!=-1) return dp[i][j];
 int up=solve(i-1,j,dp);
 int left=solve(i,j-1,dp);
 return dp[i][j]= up+left;
}
signed main()
{
 int n;
 cin>>n;
 v.resize(n,vector<char>(n));
 //vector<vector<int>>dp(n,vector<int>(n,-1));
 rep(i,0,n)
 rep(j,0,n)
 cin>>v[i][j];
 vector<vector<int>>dp(n,vector<int>(n,0));
 dp[0][0]=1;
 //cout<<solve(n-1,n-1,dp);
 rep(i,0,n)
 {
    rep(j,0,n)
    {
        if(v[i][j]=='*') {dp[i][j]=0;continue;}
        if(i==0 && j==0) {dp[i][j]=1;continue;}
        int up=0,left=0;
        if(i>0) up=dp[i-1][j];
        if(j>0) left=dp[i][j-1];
        dp[i][j]=(up+left)%mod;
    }
 }
 cout<<dp[n-1][n-1]<<endl;
}