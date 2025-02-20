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
 int n;
 cin>>n;
 vi v(n);
 rep(i,0,n)
 {
    int temp;cin>>temp;v[i]=temp;
 }
 int x;
    sort(v.begin(),v.end());
    x=v[n/2];
 //cout<<"x is: "<<x<<endl;
 int ans=0;
 for(auto it:v)
 {
    //cout<<" length : "<<it.first<<" occurs "<<it.second<<" times\n";
    ans+=abs(x-it);
 }
 cout<<ans<<endl;
}
signed main()
{
    solve();
}