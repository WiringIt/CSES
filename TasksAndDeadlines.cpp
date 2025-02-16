#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define useti unordered_set<int>
#define umapi unordered_map<int,int>
#define mseti multiset<int>
#define rep(i,start,stop) for(int i=start;i<stop;i++)
bool cmp(pair<int,int>p1,pair<int,int>p2)
{
    return p1.first<p2.first;
}
void solve()
{
 int n;
 cin>>n;
 vector<pair<int,int>>v;
 rep(i,0,n)
 {
    pair<int,int>p;
    cin>>p.first>>p.second;
    v.push_back(p);
 }
 sort(v.begin(),v.end(),cmp);
//  for(auto it:v)
//  {
//     cout<<it.first<<" "<<it.second<<endl;
//  }
 int ans=0,ps=0;
 for(int i=0;i<n;i++)
 { 
  ps+=v[i].first;
  ans+=v[i].second-ps;
  //cout<<"ans is: "<<ans<<endl;
 }
 cout<<ans<<endl;
}
signed main()
{
    solve();
}