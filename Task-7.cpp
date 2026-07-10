#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n, c, d;
        cin >> n >> c >> d;

        vector<ll> input(n * n);
        for (ll i = 0; i < n * n; ++i) {
            cin >> input[i];
        }
        sort(input.begin(), input.end());

        vector<ll> vec(n * n);
        ll min_val = input[0];
        
        for (ll i = 0; i < n; ++i) {
            for (ll j = 0; j < n; ++j) {
                vec[i * n + j] = min_val + i * c + j * d;
            }
        }
        sort(vec.begin(), vec.end());

        if (input == vec) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
