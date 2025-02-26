#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define useti unordered_set<int>
#define umapi unordered_map<int,int>
#define mseti multiset<int>
#define rep(i,start,stop) for(int i=start;i<stop;i++)
void solve(vi &c)
{
  for(int i=1000000;i>=1;i--)
  {
    int multiples=0;
    for(int j=i;j<=1000000;j+=i)
    {
        multiples+=c[j];
    }
    if(multiples>=2)
    {
        cout<<i<<" ";
        return;
    }
  }
}
signed main()
{
    vi c(1000000,0);
    int n;
    cin>>n;vi v(n);
    rep(i,0,n)cin>>v[i];
    rep(i,0,n)c[v[i]]++;
    solve(c);
}