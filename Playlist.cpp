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
 
}
signed main()
{
 int n;
 cin>>n;
 vi v(n+1);
 rep(i,1,n+1)cin>>v[i];//shifting by 1 since in map, default value associated with a key is 0
 int l=1,r=1; map<int,int>mp; int mx=0;
 while(r<=n)
 {
    if(mp[v[r]]==0 || mp[v[r]]<l)
    {
        mp[v[r]]=r;
        //cout<<"r is :"<<r<<" and l is: "<<l<<endl;
        mx=max(mx,r-l+1);
        //cout<<"mx is: "<<mx<<endl;
    }
    else if(mp[v[r]]>=l)
    {
        l=mp[v[r]]+1;
        mp[v[r]]=r;
        //cout<<"i got executed\n";
    }
    r++;
 }   
 cout<<mx<<endl;
}