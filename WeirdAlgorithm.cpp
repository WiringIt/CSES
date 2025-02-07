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
 cout<<n<<" ";
 while(n!=1)
 {
    if(n%2) n=n*3+1;
    else n/=2;
    cout<<n<<" ";
 }
}
signed main()
{
    solve();
}