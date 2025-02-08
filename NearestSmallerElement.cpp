#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define int long long
#define vi vector<int>
#define useti unordered_set<int>
#define umapi unordered_map<int,int>
#define mseti multiset<int>
#define rep(i,start,stop) for(int i=start;i<stop;i++)
vi solve(vi v)
{
    int n=v.size();
    stack<int>st; vi nse(n);
    for(int i=0;i<n;i++)
    {
        while(!st.empty() && v[st.top()-1]>=v[i]) st.pop();
        nse[i]=st.empty()?0:st.top();
        st.push(i+1);
    }
    return nse;
}
signed main()
{
    int n;
    cin>>n;
    vi v(n);
    rep(i,0,n)cin>>v[i];
    vi ans=solve(v);
    rep(i,0,n) cout<<ans[i]<<" ";
    cout<<endl;
}