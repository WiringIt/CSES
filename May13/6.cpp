#include<bits/stdc++.h>
using namespace std;
#define int long long
bool good(vector<int>&v, int t, int x) {
    int cnt = 0;
    for (auto time : v) cnt += t / time;
    return cnt >= x;
}
int main() {
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int l = 0, r = 1e18, ans = 0;
    while (l <= r) {
        int m = (l + r) / 2;
        if (good(v, m, t)) {
            ans = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    cout << ans;
}
