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
 int cnt=0;
 sort(s.begin(),s.end());
 vector<string>v;
 do
 {
    string temp="";
    for(char c:s)
    temp+=c;
    cnt++;
    v.push_back(temp);
 } while (next_permutation(s.begin(),s.end()));
 cout<<cnt<<endl;
 for(auto it:v)
 cout<<it<<endl;
}
signed main()
{
    solve();
}