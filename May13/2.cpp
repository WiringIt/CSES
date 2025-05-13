#include<bits/stdc++.h>
using namespace std;
#define int long long
bool cmp(pair<pair<int,int>,int> &a, pair<pair<int,int>,int> &b) {
    if (a.first.first == b.first.first)
        return a.first.second > b.first.second;
    return a.first.first < b.first.first;
}
int32_t main() {
    int n;
    cin >> n;
    vector<tuple<int,int,int>> v;
    for(int i=0; i<n; i++) {
        int a,b;
        cin >> a >> b;
        v.push_back({a,b,i});
    }
    sort(v.begin(), v.end(), [&](auto &x, auto &y) {
        if(get<0>(x)==get<0>(y)) return get<1>(x)>get<1>(y);
        return get<0>(x)<get<0>(y);
    });
    vector<int> contains(n), contained(n);
    multiset<int> ms;
    for(int i=n-1;i>=0;i--) {
        int b = get<1>(v[i]);
        contains[get<2>(v[i])] = ms.lower_bound(b)!=ms.end();
        ms.insert(b);
    }
    ms.clear();
    for(int i=0;i<n;i++) {
        int b = get<1>(v[i]);
        contained[get<2>(v[i])] = ms.upper_bound(b)!=ms.begin();
        ms.insert(b);
    }
    for(auto x : contains) cout << x << " ";
    cout << '\n';
    for(auto x : contained) cout << x << " ";
}
