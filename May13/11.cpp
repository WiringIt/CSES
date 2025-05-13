#include<bits/stdc++.h>
using namespace std;
#define int long long
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (x > y) {
            if (x % 2 == 0)
                cout << x * x - y + 1 << '\n';
            else
                cout << (x - 1) * (x - 1) + y << '\n';
        } else {
            if (y % 2 == 1)
                cout << y * y - x + 1 << '\n';
            else
                cout << (y - 1) * (y - 1) + x << '\n';
        }
    }
}
