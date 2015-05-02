#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    long long n, s;
    scanf("%d", &t);
    for (int cas = 1; cas <= t; ++cas) {
        scanf("%lld", &s);
        n = ceil(sqrt((double)s));
        long long x, y;
        if (n*n - s < n) {
            y = n;
            x = n*n - s + 1;
        } else {
            x = n;
            y = s - (n - 1)*(n - 1);
        }
        if (n % 2 == 0) {
            swap(x, y);
        }
        printf("Case %d: %lld %lld\n", cas, x, y);
    }
    return 0;
}