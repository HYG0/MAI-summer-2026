#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<ll> z_func(string& s) {
    ll n = s.size();
    vector<ll> z(n, 0);
    ll l = 0, r = 0;
    for (ll i = 1; i < n; ++i) {
        if (i <= r) {
            z[i] = min(r - i + 1, z[i - l]);
        }
        while (i + z[i] < n && s[z[i]] == s[i + z[i]]) {
            ++z[i];
        }
        if (i + z[i] - 1 > r) {
            l = i;
            r = i + z[i] - 1;
        }
    }
    return z;
}

void solve() {
    string s;
    cin >> s; 

    ll n = s.size();
    vector<ll> z = z_func(s);

    for (ll i = 1; i < n; ++i) {
        if (n % i == 0 && z[i] == n - i) {
            cout << i << "\n";
            return;
        }
    }

    cout << n << "\n";
}

int main() {
    solve();
    
    return 0;
}
