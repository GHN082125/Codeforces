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
        string s;
        cin >> s;
        vector<bool> mark(26, false);
        for (int i = 0; i < n/2; i++) {
            if (s[i]==s[n-1-i]) continue;
            long long a=min(s[i], s[n-1-i]);
            long long b=max(s[i], s[n-1-i]);
            for (int j = a; j < b; j++) {
                mark[j-'a']=true;
            }
        }
        cout << count(mark.begin(), mark.end(), true) << "\n";
    }
}