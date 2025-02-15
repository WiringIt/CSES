#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define useti unordered_set<int>
#define umapi unordered_map<int,int>
#define mseti multiset<int>
#define rep(i,start,stop) for(int i=start;i<stop;i++)
/* The idea is to use two ds: set to store the positions of traffic lights in ordered(ascending form) and the gaps in between
in a multiset since same gaps can get repeated. Since we want the max gap, we'll just need to return the last element in
the multiset.
As we get a new pos of a light, find its upper bound(u) in the existing lights set. The rightwards gap will be given by
u-pos. Also, decrease the index pointed by upper bound by one to get the pos of light just before the current light.(Remember
light pos are distinct, so upper_bound_ind-1 (l) will never equal the current light itself.) So, leftwards gap=current_pos-l
*/
void solve()
{
 int x,n;
 cin>>x>>n;
 set<int>lights={0,x};
 multiset<int>gaps={x};
 for(int i=0;i<n;i++)
 {
    int pos;cin>>pos;
    lights.insert(pos);
    auto it=lights.find(pos);
    int ne=*next(it),pre=*prev(it);
    gaps.erase(gaps.find(ne-pre));//since we want to delete just one occurrence of the gap, not all
    gaps.insert(ne-pos);
    gaps.insert(pos-pre);
    cout<<*(prev(gaps.end()))<<" ";
 }
}
signed main()
{
    solve();
}