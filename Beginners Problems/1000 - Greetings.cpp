#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b;
    scanf("%d", &t);
    for (int cas = 1; cas <= t; ++cas) {
        scanf("%d%d", &a, &b);
        printf("Case %d: %d\n", cas, a + b);
    }
    return 0;
}