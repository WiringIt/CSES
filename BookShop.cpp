#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define useti unordered_set<int>
#define umapi unordered_map<int,int>
#define mseti multiset<int>
#define rep(i,start,stop) for(int i=start;i<stop;i++)
int f(int ind,int maxprice,vi& price,vi& pages)//;) price<=>weight, pages<=>value, Can you see knapsack here/ ;)
{
    if(ind==0)
    {
        if(price[0]<=maxprice) return pages[0];
        else return 0;
    }
    int notTake=0+f(ind-1,maxprice,price,pages);
    int Take=INT_MIN;
    if(price[ind]<=maxprice)
    Take=pages[ind]+f(ind-1,maxprice-price[ind],price,pages);
    return max(Take,notTake);
} 
signed main()
{
    int n,x;//x is maxprice
    cin>>n>>x;
    vi price(n);
    vi pages(n);
    rep(i,0,n) cin>>price[i];
    rep(i,0,n) cin>>pages[i];
    //cout<<f(n-1,x,price,pages);
    //Tabulate
    //vector<vector<int>>dp(n,vector<int>(x+1,0));
    vector<int>prev(x+1,0),next(x+1,0);
    for(int p=0;p<=x;p++)
    prev[p]=(price[0]<=p)?pages[0]:0;
    for(int i=1;i<n;i++)//pages
    {
        for(int j=0;j<=x;j++)//price
        {
            int notTake=prev[j];
            int take=INT_MIN;
            if(price[i]<=j)
            take=prev[j-price[i]]+pages[i];
            next[j]=max(take,notTake);
        }
        prev=next;
    }
    cout<<prev[x]<<endl;
}