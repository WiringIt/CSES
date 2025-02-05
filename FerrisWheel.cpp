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
 int n,x;
 cin>>n>>x;
 vi p(n);
 rep(i,0,n) cin>>p[i];
 sort(p.begin(),p.end());
 int cnt=0;
 vector<bool>has_gondola(n);
 int i=0,j=n-1;
 while(i<j)//a child cannot be paired with itself
 {
    if(p[i]+p[j]>x) j--;//find the appropriate weight to pair with the lightest kid
    else//if correct pair is found
    {
        cnt++;
        has_gondola[i]=has_gondola[j]=true;
        i++;j--;
    }
 }
 rep(i,0,n)
 cnt+=has_gondola[i]==false;//give individual gondolas to those kids who couldn't be paired
 cout<<cnt<<endl;
}
signed main()
{
    solve();
}