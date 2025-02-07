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
 int ts=n*(n+1)/2;
 if(ts%2) cout<<"NO\n";
 else
 {
    cout<<"YES"<<endl;
    vi s1,s2;
    int target=ts/2;
    for(int i=n;i>=1;i--)
    {
        if(i<=target)
        {
            s1.push_back(i);
            target-=i;
        }
        else s2.push_back(i);
    }
    cout<<s1.size()<<endl;
    for(auto it:s1)
    cout<<it<<" ";
    cout<<endl<<s2.size()<<endl;
    for(auto it:s2)
    cout<<it<<" ";
 }
}
signed main()
{
    solve();
}