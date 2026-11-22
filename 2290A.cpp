#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--) {
        vector<long long> v(3);
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());
        if (v[1]-1==v[0]&&v[1]+1==v[2]) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
}