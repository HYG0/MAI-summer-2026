#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;

void solve() {
    ll n, m, k;
    cin >> n >> m >> k;

    vector<vector<bool>> bad(n + 1, vector<bool>(m + 1, false));
    for (ll i = 0; i < k; ++i) {
        int x, y;
        cin >> x >> y;
        bad[x][y] = true;
    }

    vector<vector<ll>> dp(n + 1, vector<ll>(m + 1, 0));
    
    dp[0][0] = 1;

    for (ll i = 0; i <= n; ++i) {
        for (ll j = 0; j <= m; ++j) {
            if (bad[i][j]) {
                dp[i][j] = 0;
                continue;
            }
            if (i > 0) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
            }
            if (j > 0) {
                dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;
            }
        }
    }

    cout << dp[n][m] << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();

    return 0;
}
