#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define int long long
#define vi vector<int>
#define useti unordered_set<int>
#define umapi unordered_map<int,int>
#define mseti multiset<int>
#define rep(i,start,stop) for(int i=start;i<stop;i++)
void solve()
{
 int n,target;
 cin>>n>>target;
 vi v(n);
 map<int,int>mp;
 rep(i,0,n) cin>>v[i];
 for(int i=0;i<n;i++)
 {
    int rem=target-v[i];
    if(mp.find(rem)!=mp.end())
    {
        cout<<mp[rem]+1<<" "<<i+1<<endl; return;
    }
    else
    mp[v[i]]=i;
 }
 cout<<"IMPOSSIBLE\n";
}
signed main()
{
    solve();
}