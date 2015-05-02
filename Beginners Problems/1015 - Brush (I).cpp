1015 - Brush (I)
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, num, e;
    scanf("%d", &t);
    for (int cas = 1; cas <= t; ++cas) {
        scanf("%d", &num);
        int ans = 0;
        for (int i = 0; i < num; i++) {
            scanf("%d", &e);
            if (e >= 0) ans += e;
        }
        printf("Case %d: %d\n", cas, ans);
    }
    return 0;
}