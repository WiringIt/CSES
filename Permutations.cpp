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
 int n;
 cin>>n;
 if(n==2 || n==3)
 cout<<"NO SOLUTION"<<endl;
 else if(n==1)
 {
    cout<<1<<' '; cout<<endl;
 }
 else
 {
    for(int i=2;i<=n;i+=2)
    cout<<i<<" ";
    for(int i=1;i<=n;i+=2)
    cout<<i<<" ";
    cout<<endl;
 }
}
signed main()
{
    solve();
}