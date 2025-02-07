#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define int long long
#define vi vector<int>
#define useti unordered_set<int>
#define umapi unordered_map<int,int>
#define mseti multiset<int>
#define rep(i,start,stop) for(int i=start;i<stop;i++)
int sieve[1000001];
void create_sieve()
{
    for(int i=1;i<1000001;i++)
    sieve[i]=1;
    for(int i=1;i<1000001;i++)
    {
        for(int j=i*2;j<1000001;j+=i)
        sieve[j]++;
    }
}
void solve()
{
  int x;
  cin>>x;
  create_sieve();
  map<int,int>mp;
  while(x!=1)
  {
    mp[sieve[x]]++;
    x/=sieve[x];
  }
  int ans=1;
  for(auto it:mp)
  ans*=(it.second+1);
  cout<<ans<<endl;
}
signed main()
{
    int n;
    cin>>n;
    create_sieve();
    while(n--)
    {
        int x;
        cin>>x;
        cout<<sieve[x]<<endl;
    }
}