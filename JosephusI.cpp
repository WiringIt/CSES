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
 queue<int>q;
 for(int i=1;i<=n;i++)q.push(i);
 bool flag=0;
 while(!q.empty())
 {
    int child=q.front();q.pop();
    if(flag){cout<<child<<" ";flag=0;}
    else {q.push(child);flag=1;}
 }
}
signed main()
{
 solve();   
}