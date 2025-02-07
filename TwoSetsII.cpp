#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define int long long
#define vi vector<int>
#define useti unordered_set<int>
#define umapi unordered_map<int,int>
#define mseti multiset<int>
#define rep(i,start,stop) for(int i=start;i<stop;i++)
int f(int ind,int target,vector<int>v)
{
    if(ind==0) return target==v[ind];
    if(target==0) return 1;
    int not_take=f(ind-1,target,v);
    int take=0;
    if(v[ind]<=target)
    take=f(ind-1,target-v[ind],v);
    return take+not_take;
}
signed main()
{
    int n;
    cin>>n;
    vi v(n);
    int ts=0;
    for(int i=0;i<n;i++)
    {
    v[i]=i+1;
    ts+=v[i];
    }
    int mod=1e9+7;
    int target=0;
    if(ts%2) {cout<<0<<endl; return 0;}
    target=ts/2;
    //cout<<"target is: "<<target<<endl;
    //vector<vector<int>>dp(n,vector<int>(target+1,0));
    vector<int>prev(target+1,0),cur(target+1,0);
    //for(int tar=0;tar<=target;tar++)
    if(v[0]<=target)
    prev[v[0]]=1; //dp[0][v[0]]=1;
    //for(int ind=0;ind<n;ind++) dp[ind][0]=1;
    prev[0]=cur[0]=1;
    for(int ind=1;ind<n;ind++)
    {
        for(int tar=0;tar<=target;tar++)
        {
            int not_take=prev[tar]; //dp[ind-1][tar];
            int take=0;
            if(v[ind]<=tar) take=prev[tar-v[ind]]; //dp[ind-1][tar-v[ind]];
            cur[tar]=(take+not_take)%mod; //dp[ind][tar]=take+not_take;
        }
        prev=cur;
    }
    //int ans=(dp[n-1][target])/2;
    int inv2 = (mod + 1) / 2; // 2^(mod-2) % mod using Fermat's theorem
    int ans = (prev[target] * inv2) % mod;
    cout << ans << endl;

}