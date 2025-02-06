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
 int n;
 cin>>n;
 vi v(n);
 rep(i,0,n)cin>>v[i];
 int sum=0;
 int mx=INT_MIN;
 rep(i,0,n)
 {
    sum+=v[i];mx=max(mx,sum);
    if(sum<0) sum=0;
 }
 cout<<mx<<endl;
}
signed main()
{
    solve();
}