#include <bits/stdc++.h>
using namespace std;
int dp[100005];
const int MOD = 10000007;
int main() {
    int t, a, b, c, d, e, f, n;
    scanf("%d", &t);
    for (int cas = 1; cas <= t; ++cas) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        memset(dp, 0, sizeof(dp));
        dp[0] = a % MOD; dp[1] = b % MOD; dp[2] = c % MOD; dp[3] = d % MOD; dp[4] = e % MOD; dp[5] = f % MOD;
        for (int i = 6; i <= n; i++) {
            for (int j = 1; j <= 6; j++) {
                dp[i] = (dp[i] + dp[i - j]) % MOD;
            }
        }
        printf("Case %d: %d\n", cas, dp[n]);
    }
    return 0;
}