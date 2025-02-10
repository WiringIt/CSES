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
 if(v.size()==1) 
 {
    cout<<1<<endl;return;
 }
 vector<pair<int,int>>temp;
 rep(i,0,n)
 {
    temp.push_back(make_pair(v[i].first,1));
    temp.push_back(make_pair(v[i].second,-1));
 }
 sort(temp.begin(),temp.end(),cmp);
 vi ans;int cnt=0;
 rep(i,0,temp.size())
 {
   cnt+=temp[i].second;
   ans.push_back(cnt);
 }
 cout<<*max_element(ans.begin(),ans.end())<<endl;
}
signed main()
{
 solve();   
}