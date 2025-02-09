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
 
}
signed main()
{
    int n,target;
    cin>>n>>target;
    vi v(n);
    vector<pair<int,int>>mp;
    rep(i,0,n)
    {
        cin>>v[i];
        pair<int,int>p;//value->index
        p.first=v[i];p.second=i+1;
        mp.push_back(p);
    }
    sort(mp.begin(),mp.end());
    rep(i,0,n)
    {
        int j=0,k=n-1;
        while(j<k)
        {
            int x=target-mp[i].first-mp[j].first;
            if(i!=j && i!=k && mp[i].first+mp[j].first+mp[k].first==target)
            {
                cout<<mp[i].second<<" "<<mp[j].second<<" "<<mp[k].second<<endl;return 0;
            }
            else if(mp[i].first+mp[j].first+mp[k].first<target)j++;
            else k--;
        }
    }
    cout<<"IMPOSSIBLE\n";
}
