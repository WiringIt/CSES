#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define useti unordered_set<int>
#define umapi unordered_map<int,int>
#define mseti multiset<int>
#define rep(i,start,stop) for(int i=start;i<stop;i++)
int MOD=1e9+7;
int expo(int base,int exp,int mod)
{
    int res=1;
    while(exp)
    {
        if(exp&1)//check for odd
        {
            exp-=1;res=(res*base)%mod;
        }
        else
        {
            exp/=2;
            base=(base*base)%mod;
        }
    }
    return res;
}
int inv(int base,int exp,int mod)
{
    return expo(base,mod-2,mod);
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;cin>>a>>b>>c;
        int b_power_c=expo(b,c,MOD-1);
        cout<<expo(a,b_power_c,MOD)<<endl;
    }
}