#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    unordered_map<string, long long> mp;
    while (n--) {
        string s;
        cin >> s;
        if (mp[s]==0) cout << "OK";
        else cout << s << mp[s];
        mp[s]++;
        cout << "\n";
    }
}