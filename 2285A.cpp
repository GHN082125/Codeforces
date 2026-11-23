#include <bits/stdc++.h>
using namespace std;

bool prime(long long n) {
    if (n<2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n%i==0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (n<4) {
            cout << -1 << "\n";
            continue;
        }
        vector<long long> p;
        vector<long long> c;
        for (int i = 1; i <= n; i++) {
            if (prime(i)) p.push_back(i);
            else c.push_back(i);
        }
        for (int i = 1; i <= n; i++) {
            if (prime(i)) {
                cout << p.back() << " ";
                p.pop_back();
            }
            else {
                cout << c.back() << " ";
                c.pop_back();
            }
        }
        cout << "\n";
    }
}