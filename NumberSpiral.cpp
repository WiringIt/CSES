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
 int y,x;
 cin>>y>>x;
 if(y>x)
 {
    int sq=(y-1)*(y-1);
    if(y%2) cout<<sq+x<<endl;
    else cout<<sq+(2*y-x)<<endl;
 }
 else
 {
    int sq=(x-1)*(x-1);
    if(x%2==0) cout<<sq+y<<endl;
    else cout<<sq+(2*x-y)<<endl;
 }
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
 solve();   
}