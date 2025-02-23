#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define useti unordered_set<int>
#define umapi unordered_map<int,int>
#define mseti multiset<int>
#define rep(i,start,stop) for(int i=start;i<stop;i++)
int solve(int ind,vi &v,int s1,int s2,int n)
{
 if(ind==n)
 {
    return abs(s1-s2);
 }
 int take=solve(ind+1,v,s1+v[ind],s2,n);
 int not_take=solve(ind+1,v,s1,s2+v[ind],n);
 return min(take,not_take);
}
signed main()
{
    int n;
    cin>>n;
    vi v(n);
    rep(i,0,n)cin>>v[i];
    cout<<solve(0,v,0,0,n)<<endl;
}