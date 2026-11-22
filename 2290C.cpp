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
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<long long> l;
        vector<long long> r;
        vector<long long> mid;
        for (int i = 0; i < n; i++) {
            if (l.empty()||a[i]!=l.back()) l.push_back(a[i]);
            else if (r.empty()||a[i]!=r.back()) r.push_back(a[i]);
            else mid.push_back(a[i]);
        }
        cout << l.size()+r.size() << "\n";
        reverse(r.begin(), r.end());
        for (auto i: l) {
            cout << i << " ";
        }
        for (auto i: mid) {
            cout << i << " ";
        }
        for (auto i: r) {
            cout << i << " ";
        }
        cout << "\n";
    }
}