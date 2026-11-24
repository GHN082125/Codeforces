#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        cout << min({abs(a-b), abs(a-c), abs(b-c)}) << "\n";
    }
}