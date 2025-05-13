#include<bits/stdc++.h>
using namespace std;
#define int long long
int main() {
    int n;
    cin >> n;
    vector<tuple<int,int,int>> v;
    for(int i=0;i<n;i++) {
        int a,b;
        cin >> a >> b;
        v.push_back({a,-b,i});
    }
    sort(v.begin(), v.end());
    vector<int> ans(n);
    map<int,int> freq;
    for(int i=n-1;i>=0;i--) {
        int b = -get<1>(v[i]);
        int id = get<2>(v[i]);
        ans[id] = freq.lower_bound(b)->second;
        freq[b]++;
    }
    for(auto x : ans) cout << x << ' ';
    cout << '\n';
    freq.clear();
    vector<int> ans2(n);
    for(int i=0;i<n;i++) {
        int b = -get<1>(v[i]);
        int id = get<2>(v[i]);
        ans2[id] = freq.lower_bound(b)->second;
        freq[b]++;
    }
    for(auto x : ans2) cout << x << ' ';
}
