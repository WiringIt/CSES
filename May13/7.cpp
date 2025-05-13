#include<bits/stdc++.h>
using namespace std;
#define int long long
int main() {
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        v[i] += v[i - 1];
    }
    multiset<int> ms;
    int ans = LLONG_MIN;
    for (int i = a; i <= n; i++) {
        ms.insert(v[i - a]);
        if (i > b) ms.erase(ms.find(v[i - b - 1]));
        ans = max(ans, v[i] - *ms.begin());
    }
    cout << ans;
}
