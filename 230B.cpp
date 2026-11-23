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
    vector<bool> prime(1e6+1, true);
    prime[0]=prime[1]=false;
    for (int i = 2; i <= 1000; i++) {
        if (prime[i]) {
            for (int j = i*i; j <= 1000000; j+=i) {
                prime[j]=false;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (sqrt(a[i])==round(sqrt(a[i]))&&prime[sqrt(a[i])]) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
}