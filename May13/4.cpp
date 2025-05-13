#include<bits/stdc++.h>
using namespace std;
#define int long long
int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    map<int, int> mp;
    mp[0]++;
    int sum = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        ans += mp[sum - x];
        mp[sum]++;
    }
    cout << ans;
}
