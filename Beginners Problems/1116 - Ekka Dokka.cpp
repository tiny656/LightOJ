1116 - Ekka Dokka
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
    int t;
    long long w;
    scanf("%d", &t);
    for (int cas = 1; cas <= t; cas++) {
        scanf("%lld", &w);
        long long m, n;
        bool ok = false;
        if (!(w&1)) {
            for (long long i = 2; i <= w; i += 2) {
                if ((w%i) == 0 && ((w/i)&1) ) {
                    m = i;
                    n = w / i;
                    ok = true;
                    break;
                }
            }
        }
        if (ok) printf("Case %d: %lld %lld\n",cas, n, m);
        else printf("Case %d: Impossible\n", cas);
    }
    return 0;
}