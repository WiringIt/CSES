#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define int long long
#define vi vector<int>
#define useti unordered_set<int>
#define umapi unordered_map<int,int>
#define mseti multiset<int>
#define rep(i,start,stop) for(int i=start;i<stop;i++)
bool solve()
{
 int a,b;
 cin>>a>>b;
 //say, x 2,1 moves 
 // y 1,2 moves
 //hence, 2x+y=a and x+2y=b
 //observe that if you only check whether (a+b)%3==0, you may end up making x, y negative
 //thus find out x and y individually and check whether they are >=0
 int x=(2*a-b)/3,y=(2*b-a)/3;
 return ((a+b)%3==0 && x>=0 && y>=0);
}
signed main()
{
    int n;
    cin>>n;
    while(n--)
    {
        if(solve())
        cout<<"YES\n";
        else cout<<"NO\n";
    }
}