#include<bits/stdc++.h>
using namespace std;
int josephus(int n) {
    if (n == 1) return 1;
    return (josephus(n - 1) + 2 - 1) % n + 1;
}
int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cout << josephus(i) << ' ';
    }
}
