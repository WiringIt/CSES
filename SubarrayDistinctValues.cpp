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
    int n,k;
    cin>>n>>k;
    vi v(n);
    rep(i,0,n) cin>>v[i];
    int l=0,r=0;
    map<int,int>mp;int cnt=0;
    while(r<n)
    {
       mp[v[r]]++;
       while(mp.size()>k)
        {
            mp[v[l]]--;
            if(mp[v[l]]==0) mp.erase(v[l]);
            l++;
        }
       cnt+=r-l+1;
       r++;
    }
    cout<<cnt<<endl;
}