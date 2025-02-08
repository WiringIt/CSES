#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define int long long
#define vi vector<int>
#define useti unordered_set<int>
#define umapi unordered_map<int,int>
#define mseti multiset<int>
#define rep(i,start,stop) for(int i=start;i<stop;i++)
int binpow(int base,int expo)
{
    int res=1;
    while(expo)
    {
        if(expo&1) //ie, expo is odd
        {
            expo-=1;
            res=(res*base);
        }
        else
        {
            base=(base*base);
            expo/=2;
        }
    }
    return res;
}
void solve()
{
 int k;
 cin>>k;
 //if(k<=9) {cout<<k<<endl;return;}
 int digits=1,block=9;
 while(k-digits*block>0)
 {
    k-=digits*block;
    block*=10;
    digits++;
 }
 //cout<<"k is: "<<k<<endl;
 int number_at_kth=binpow(10,(digits-1))+(k-1)/digits;
 //cout<<"digits is: "<<digits<<endl; 
 int index=k%digits;
//  cout<<"index is: "<<index<<endl;
 //string x=to_string(number_at_kth);
 //cout<<"x is: "<<x<<endl;
 //cout<<x[index]<<endl;
//cout<<number_at_kth<<endl;
 if(index!=0)
 number_at_kth=number_at_kth/binpow(10,digits-index);
 cout<<number_at_kth%10<<endl;
}
signed main()
{
    int q;
    cin>>q;
    while(q--)
    solve();
}


