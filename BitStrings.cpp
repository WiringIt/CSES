#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define int long long
#define vi vector<int>
#define useti unordered_set<int>
#define umapi unordered_map<int,int>
#define mseti multiset<int>
#define rep(i,start,stop) for(int i=start;i<stop;i++)
int mod=1e9+7;
int binpow(int base,int expo)
{
    int res=1;
    while(expo)
    {
        if(expo&1) //ie, expo is odd
        {
            expo-=1;
            res=(res*base)%mod;
        }
        else
        {
            base=(base*base)%mod;
            expo/=2;
        }
    }
    return res%mod;
}
signed main()
{
    int n;
    cin>>n;
    cout<<binpow(2,n)<<endl; 
}