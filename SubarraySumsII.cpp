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
 
}
signed main()
{
 int n,x;
 cin>>n>>x;
 vi v(n);
 rep(i,0,n)cin>>v[i];
 map<int,int>mp;//sum and freq
 mp[0]=1;int cnt=0,sum=0;
 rep(i,0,n)
 {
  sum+=v[i];
  cnt+=mp[sum-x];
  mp[sum]++;
 }   
 cout<<cnt<<endl;
}