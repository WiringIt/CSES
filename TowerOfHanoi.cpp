#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define useti unordered_set<int>
#define umapi unordered_map<int,int>
#define mseti multiset<int>
#define rep(i,start,stop) for(int i=start;i<stop;i++)
void solve(int n,int source,int aux,int dest,vector<pair<int,int>>&v)
{
  if(n==1){
  v.push_back(make_pair(source,dest));return;}
  solve(n-1,source,dest,aux,v);
  v.push_back(make_pair(source,dest));
  solve(n-1,aux,source,dest,v);
}
signed main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    solve(n,1,2,3,v);
    
    cout<<v.size()<<endl;
    for(auto it:v)
    {
        cout<<it.first<<" "<<it.second<<endl; 
    }
}