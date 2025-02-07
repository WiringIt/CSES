#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define int long long
#define vi vector<int>
#define useti unordered_set<int>
#define umapi unordered_map<int,int>
#define mseti multiset<int>
#define rep(i,start,stop) for(int i=start;i<stop;i++)
int f(int i,int j,string s1,string s2)
{
    if(i==0) return j;
    if(j==0) return i;
    if(s1[i-1]==s2[j-1]) return f(i-1,j-1,s1,s2);
    else
    {
        return 1+min(f(i-1,j,s1,s2),min(f(i,j-1,s1,s2),f(i-1,j-1,s1,s2)));//delete,insert,replace
    } 
}

signed main()
{
    string s1,s2;
    cin>>s1>>s2;
    int m=s1.size(),n=s2.size();
    //cout<<f(m,n,s1,s2)<<endl;
    //vector<vector<int>>dp(m+1,vector<int>(n+1,0));
    vector<int>prev(n+1,0),cur(n+1,0);
    //base case:
    for(int j=0;j<=n;j++) prev[j]=j; //dp[0][j]=j;
    //for(int i=0;i<=m;i++) dp[i][0]=i;
    for(int i=1;i<=m;i++)
    {
        cur[0]=i;
        for(int j=1;j<=n;j++)
        {
            if(s1[i-1]==s2[j-1]) cur[j]=prev[j-1]; //dp[i][j]=dp[i-1][j-1];
            else cur[j]=1+min(prev[j-1],min(prev[j],cur[j-1])); //dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
        }
        prev=cur;
    }
    cout<<prev[n]<<endl; //dp[m][n]<<endl;
}