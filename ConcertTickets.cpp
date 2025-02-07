#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define int long long
#define vi vector<int>
#define useti unordered_set<int>
#define umapi unordered_map<int,int>
#define mseti multiset<int>
#define rep(i,start,stop) for(int i=start;i<stop;i++)
int lb(int x,vector<int>v)
{
    int low=0,high=v.size()-1;
    int ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(v[mid]<=x)
        {
          ans=mid;
          low++;
        }
        else high--;
    }
    return ans;
}
void solve()// nlogn+m*(nlogn)+mn => for "erasing" from vector
{
  int n,m;
  cin>>n>>m;
  vi price(n),answer(m);
  rep(i,0,n) cin>>price[i];
  sort(price.begin(),price.end());
  rep(i,0,m) 
  {
    int cust;
    cin>>cust;
    int x=lb(cust,price);
    if(x!=-1)
    {
    answer[i]=price[x];
    price.erase(price.begin()+x);
    }
    else answer[i]=x;
  }
  for(auto it:answer)
  cout<<it<<endl;
}
void optimised()
{
    int n,m;
    cin>>n>>m;
    mseti price;//using multiset => stores in ascending order
    rep(i,0,n) 
    {
        int temp;
        cin>>temp;
        price.insert(temp);
    }
    rep(i,0,m)
    {
        int cust; cin>>cust;
        auto it=price.upper_bound(cust);//log n
        //cout<<"Im here: "<<*it<<endl;
        if(it==price.begin())
        cout<<-1<<endl;
        else
        {
            cout<<*(--it)<<endl;
            price.erase(it);
        }
        // cout<<"printing the price array: ";
        // for(auto it:price) 
        // {
        //     cout<<it<<" ";
        // }
        // cout<<endl;
    }
}
signed main()
{
    optimised();
    // vi v={5,3,7,8,5};
    // cout<<v[lb(4,v)]<<endl;
}