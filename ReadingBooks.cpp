#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define useti unordered_set<int>
#define umapi unordered_map<int,int>
#define mseti multiset<int>
#define rep(i,start,stop) for(int i=start;i<stop;i++)
void solve()
{
 int n;
 cin>>n;
 vi v(n);
 int mx=INT_MIN;
 int sum=0;
 rep(i,0,n){cin>>v[i]; mx=max(mx,v[i]);sum+=v[i];}
 if(mx>sum-mx)
 cout<<2*mx;
 else
 cout<<sum<<endl;
}
signed main()
{
    solve();
}