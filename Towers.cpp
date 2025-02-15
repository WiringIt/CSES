#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define useti unordered_set<int>
#define umapi unordered_map<int,int>
#define mseti multiset<int>
#define rep(i,start,stop) for(int i=start;i<stop;i++)
//Idea: we identify each tower by the size of the block at its top
//for each incoming block, search for the tower which has the smallest top-block size but greater than incooming block(fancy
//way of saying upper_bound). If it exists, good! just replace that existing tower identity to the incoming block size,
//since it would sit at the top now. What if doesn't? Just build a new tower, ie, push_back into v. :) 
void solve()
{
 int n;
 cin>>n; vi v;
 rep(i,0,n)
 {
  int temp;cin>>temp;
  if(upper_bound(v.begin(),v.end(),temp)==v.end())//no tower exists whose top-block size is greater than the incoming block
  v.push_back(temp);
  else 
  {
    int ind=upper_bound(v.begin(),v.end(),temp)-v.begin();
    v[ind]=temp;
  }
 }
 cout<<v.size();
}
signed main()
{
    solve();
}