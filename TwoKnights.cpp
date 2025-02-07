#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define int long long
#define vi vector<int>
#define useti unordered_set<int>
#define umapi unordered_map<int,int>
#define mseti multiset<int>
#define rep(i,start,stop) for(int i=start;i<stop;i++)
void solve(int k)
{
 if(k<=1) {cout<<0<<endl; return;}
 int x1=((k*k)*(k*k-1))/2;
 int x2=4*(k-1)*(k-2);
 cout<<x1-x2<<endl;
}
signed main()
{
    int t;
    cin>>t;
    rep(i,1,t+1)
    solve(i);
}