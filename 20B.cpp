#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a, b, c;
    cin >> a >> b >> c;
    if (a==0) {
        if (b==0) {
            if (c==0) cout << -1;
            else cout << 0;
        }
        else {
            cout << 1 << "\n";
            cout << fixed << setprecision(10) << (double)-c/b;
        }
    }
    else {
        long long delta=b*b-4*a*c;
        if (delta>0) {
            cout << 2 << "\n";
            double s1=(double)(-b-sqrt(delta))/(2*a);
            double s2=(double)(-b+sqrt(delta))/(2*a);
            if (s1>s2) swap(s1, s2);
            cout << fixed << setprecision(10) << s1 << "\n";
            cout << fixed << setprecision(10) << s2;
        }
        else if (delta==0) {
            cout << 1 << "\n";
            cout << fixed << setprecision(10) << (double)-b/(2*a);
        }
        else cout << 0;
    }
}