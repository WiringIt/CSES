#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define int long long
#define vi vector<int>
#define useti unordered_set<int>
#define umapi unordered_map<int,int>
#define mseti multiset<int>
#define rep(i,start,stop) for(int i=start;i<stop;i++)
void solve(vector<int>v)
{
    vector<int>temp;
    temp.push_back(v[0]);
 for(int ind=1;ind<v.size();ind++)
 {    
        if(v[ind]>temp.back())
        temp.push_back(v[ind]);
        else
        {
            int i=lower_bound(temp.begin(),temp.end(),v[ind])-temp.begin();
            temp[i]=v[ind];
        }
 }
 cout<<temp.size()<<endl;
}
signed main()
{
    int n;
    cin>>n;
    vi v(n);
    rep(i,0,n)
    cin>>v[i];
    solve(v);
}