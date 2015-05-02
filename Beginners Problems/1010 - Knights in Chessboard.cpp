1010 - Knights in Chessboard
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, m, n;
    scanf("%d", &t);
    for (int cas = 1; cas <= t; ++cas) {
        scanf("%d %d", &m, &n);
        int ans = 0;
        if (min(n, m) == 1) {
            ans = n * m;
        } else if (min(n, m) == 2) {
            ans = 4 * (((max(n, m) + 1) / 2 + 1) / 2);
            if (((max(n, m) + 1) / 2) % 2 != 0 && max(n, m)%2 != 0) {
                ans -= 2;
            }
        } else {
            if (n % 2 == 0) {
                ans = m*(n / 2);
            }
            else {
                ans = (m + 1) / 2 * ((n + 1) / 2) + (m / 2)*(n / 2);
            }
        }
        printf("Case %d: %d\n", cas, ans);
    }
    return 0;
}