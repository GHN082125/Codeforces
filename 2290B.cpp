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
        char cur='R';
        long long re=0;
        for (int i = 0; i < n; i++) {
            if (s[i]==cur) {
                if (cur=='R') cur='B';
                else cur='R';
            }
            else re++;
        }
        cout << re << "\n";
    }
}