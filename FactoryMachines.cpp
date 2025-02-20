#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define useti unordered_set<int>
#define umapi unordered_map<int,int>
#define mseti multiset<int>
#define rep(i,start,stop) for(int i=start;i<stop;i++)
bool check(int mid,int n,int t,vi& v)
{
  int sum=0;
  rep(i,0,n)
  {
    sum+=(mid/v[i]);
    if(sum>=t)return true;
  }
  return false;
}
void solve(vi&v,int n,int t)
{
 int low=1,high=*min_element(v.begin(),v.end())*t;
 int ans=0;
 while(low<=high)
 {
    int mid=(low+high)/2;
    if(check(mid,n,t,v))
    {
        ans=mid;high=mid-1;
    }
    else low=mid+1;
 }
 cout<< ans;
}
signed main()
{
 int n,t;cin>>n>>t;   
 vi v(n);
 rep(i,0,n)cin>>v[i];
 solve(v,n,t);
}