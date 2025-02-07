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
    //power of 2 using bit manip: num<<k is num*2^k
    //num>>k=num/(2^k)
    for(int i=0;i<(1<<n);i++)
    {
        //i is the decimal value
        //gray=(binary>>1)xor(binary)
        //thus we can write (decimal>>1)xor(decimal)
        int gray=(i>>1)^(i);
        //convert this to binary now
        bitset<16> val(gray); //since constrain 1<=n<=16
        string ans=val.to_string();
        cout<<ans.substr(16-n,n)<<endl;
    }
}
signed main()
{
    solve();
}