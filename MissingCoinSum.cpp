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
 cin>>n; vi v(n);
 rep(i,0,n)cin>>v[i];
 sort(v.begin(),v.end());
 int s=1;
 rep(i,0,n)
 {
    if(v[i]>s)
    {
        cout<<s<<endl;return;
    }
    else s+=v[i];
 }
 cout<<s<<endl;
}
signed main()
{
 solve();   
}