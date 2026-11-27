#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if (a<=b) cout << -1;
        else cout << min(b, a-b);
        cout << "\n";
    }
}