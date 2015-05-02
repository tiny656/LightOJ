1202 - Bishops
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;


int main() {
    int t, r1, r2, c1, c2;
    scanf("%d", &t);
    for (int cas = 1; cas <= t; cas++) {
        scanf("%d%d%d%d", &r1, &c1, &r2, &c2);
        int diff1 = abs(r2 - r1);
        int diff2 = abs(c2 - c1);
        int ans = 0;
        if (diff1 == diff2) {
            if (diff1 == 0) ans = 0;
            else ans = 1;
        } else {
            if ((diff1 % 2) == (diff2 % 2)) ans = 2;
            else ans = -1;
        }
        printf("Case %d: ", cas);
        if (ans == -1) printf("impossible\n");
        else printf("%d\n", ans);
    }
    return 0;
}