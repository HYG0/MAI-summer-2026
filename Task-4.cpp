#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
    ll n, k;
    cin >> n >> k;

    vector<ll> a(k);
    ll max_element_val = 0;
    ll max_idx = 0;

    for (ll i = 0; i < k; ++i) {
        cin >> a[i];
        if (a[i] > max_element_val) {
            max_element_val = a[i];
            max_idx = i;
        }
    }

    ll total_ops = 0;

    for (ll i = 0; i < k; ++i) {
        if (i == max_idx) continue;
        
        total_ops += (2 * a[i] - 1);
    }

    cout << total_ops << "\n";
}

int main() {
    ll t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
