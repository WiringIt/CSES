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
 vi v(n);
 rep(i,0,n)
 cin>>v[i];
 int op=0;
 rep(i,1,n)
 {
    if(v[i]<v[i-1])//breaking the increasing nature
    {
      op+=v[i-1]-v[i];
      //cout<<v[i-1]<<" and "<<v[i]<<endl;
      //cout<<"Hence # op: "<<op<<endl;
      v[i]+=v[i-1]-v[i];
      //cout<<"Now v[i] is: "<<v[i]<<endl;
    }
 }
 cout<<op<<endl;
}
signed main()
{
    solve();
}