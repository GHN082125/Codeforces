#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long q;
    cin >> q;
    while (q--) {
        long long x;
        cin >> x;
        cout << upper_bound(a.begin(), a.end(), x)-a.begin() << "\n";
    }
}