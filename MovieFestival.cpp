#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define int long long
#define vi vector<int>
#define useti unordered_set<int>
#define umapi unordered_map<int,int>
#define mseti multiset<int>
#define rep(i,start,stop) for(int i=start;i<stop;i++)
bool cmp(pair<int,int>p1,pair<int,int>p2)
{
   return p1.second<p2.second;
}
void solve()
{
 int n;
 cin>>n;
 vector<pair<int,int>>v(n);
 rep(i,0,n)
 {
    pair<int,int>p;
    cin>>p.first; cin>>p.second;
    v[i]=p;
 }
 sort(v.begin(),v.end(),cmp);
 int last_movie_ending=v[0].second;
 int cnt=1;
 for(int i=1;i<n;i++)
 {
   if(v[i].first>=last_movie_ending)
   {
    cnt++;
    last_movie_ending=v[i].second;
   }
 }
 cout<<cnt<<endl;
}
signed main()
{
    solve();
}