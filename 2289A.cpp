#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if ((n&1)||n%4==0) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
}