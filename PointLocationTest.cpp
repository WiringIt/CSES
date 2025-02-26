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
 int x1,y1,x2,y2,x3,y3;
 cin>>x1>>y1>>x2>>y2>>x3>>y3;
 int val=(x2-x1)*(y3-y1)-(y2-y1)*(x3-x1);
 if(val==0)cout<<"TOUCH\n";
 else if(val<0)cout<<"RIGHT\n";
 else cout<<"LEFT\n";
}
signed main()
{
 int t;
 cin>>t;
 while(t--)
 solve();   
}