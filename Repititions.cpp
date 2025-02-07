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
 string s;
 cin>>s;
 if(s.length()==1)
 {
    cout<<1<<endl;
    return;
 }
 int i=0,j=1;
 int mx=INT_MIN;
 while(j<s.length())
 {
    if(s[i]==s[j])
    {
        mx=max(mx,j-i+1);
        j++;
    }
    else
    {
        i++;
    }
 }
 cout<<mx<<endl;
}
signed main()
{
    solve();
}