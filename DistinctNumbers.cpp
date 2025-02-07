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
 map<int,int>mp;
 rep(i,0,n)
 {
    int temp;
    cin>>temp;
    mp[temp]++;
 }
 cout<<mp.size()<<endl;
}
signed main()
{
 solve();   
}