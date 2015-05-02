1107 - How Cow
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
int main() {
    int t;
    int x1, y1, x2, y2, m, x, y;
    scanf("%d", &t);
    for (int cas = 1; cas <= t; cas++) {
        printf("Case %d:\n", cas);
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        scanf("%d", &m);
        for (int q = 1; q <= m; q++) {
            scanf("%d%d", &x, &y);
            if (x > x1&&x < x2&&y > y1&&y < y2) {
                puts("Yes");
            } else {
                puts("No");
            }
        }
    }
    return 0;
}