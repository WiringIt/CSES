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
    map<char,int>mp;//this is the frequency array
    for(int i=0;i<s.length();i++)
    mp[s[i]]++;
    int cnt=0;
    for(auto it:mp)
    {
        if(it.second%2) cnt++;//counting numeber of odd freq chars
        if(cnt>1) {cout<<"NO SOLUTION\n";return;}
    }
    int front=0,back=s.length()-1;
    //bool flag;char odd_char;
    for(auto it:mp)
    {
        if(it.second!=1)
        {
            int cnt=it.second;
            if(it.second%2) {cnt=it.second-1; int mid; //odd_char=it.first;flag=true;
            if(s.length()%2)
            {
                mid=s.length()/2;
                s[mid]=it.first;
            }
            }
            cnt/=2;
        int f_end=front+cnt;
        while(front!=f_end) 
        s[front++]=it.first;  
        //cout<<"front is: "<<front<<endl;
        int back_st=back-cnt+1;
        while(back>=back_st)
        s[back--]=it.first;
        //cout<<"back is: "<<back<<endl;
        }
        else if(it.second==1)
        {
            if(s.length()%2)
            {
                int mid=s.length()/2;
                s[mid]=it.first;
            }
        }
    }
    cout<<s<<endl;
}
signed main()
{
    solve();
}