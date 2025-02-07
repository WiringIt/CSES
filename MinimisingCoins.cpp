#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define int long long
#define vi vector<int>
#define useti unordered_set<int>
#define umapi unordered_map<int,int>
#define mseti multiset<int>
#define rep(i,start,stop) for(int i=start;i<stop;i++)
int f(int ind,int t,vector<int>&v)
{
    if(t==0)return 0;
    if(ind==0)
    return  t%v[0]==0? t/v[0]:1e9;
    int not_take=f(ind-1,t,v);
    int take=1e9;
    if(v[ind]<=t)
    {
        take=1+f(ind,t-v[ind],v);
    }
    return min(take,not_take);
}
signed main()
{
    int n,x;
    cin>>n>>x;
    vi v(n);
    rep(i,0,n) cin>>v[i];
    //vector<vector<int>>dp(n,vector<int>(x+1,0));
    vector<int>prev(x+1,0),cur(x+1,0);
    //for(int i=0;i<n;i++) dp[i][0]=0;
    for(int tar=0;tar<=x;tar++) prev[tar]=tar%v[0]==0? tar/v[0]:1e9; //dp[0][tar]=tar%v[0]==0? tar/v[0]:1e9;
    for(int ind=1;ind<n;ind++)
    {
        for(int tar=0;tar<=x;tar++)
        {
            int not_take=prev[tar]; //dp[ind-1][tar];
            int take=1e9;
            if(v[ind]<=tar)
            take=1+cur[tar-v[ind]]; //dp[ind][tar-v[ind]];
            cur[tar]=min(take,not_take); //dp[ind][tar]=min(take,not_take);
        }
        prev=cur;
    }
    cout<<(prev[x]>=1e9?-1:prev[x])<<endl;
}