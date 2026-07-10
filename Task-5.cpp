#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;

int main(){
    ll n, k;
    cin >> n;
    vector<ll> dp(n + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= n; ++i) {
        for (int j = n; j >= i; --j) {
            dp[j] = (dp[j] + dp[j - i]) % MOD;
        }
    }
    cout << dp[n] << "\n";
}
