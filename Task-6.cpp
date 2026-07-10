#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

using namespace std;
using ll = long long;

int main() {
    ll n, k, max_xor = 0;
    cin >> n >> k;

    vector<ll> vec(n);
    for (ll i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    vector<ll> mask(n, 0);
    for (ll i = n - k; i < n; ++i) {
        mask[i] = 1;
    }

    do {
        ll curr_xor = 0;
        for (ll i = 0; i < n; ++i) {
            if (mask[i] == 1) {
                curr_xor ^= vec[i];
            }
        }
        max_xor = max(max_xor, curr_xor);
    } while (next_permutation(mask.begin(), mask.end()));

    cout << max_xor << "\n";

    return 0;
}
