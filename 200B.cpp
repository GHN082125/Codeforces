#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    long long x;
    long long sum=0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum+=x;
    }
    cout << fixed << setprecision(10) << (double)sum/n;
}