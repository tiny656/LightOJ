1189 - Sum of Factorials
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

long long fac[] = { 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600, 6227020800, 87178291200,
1307674368000, 20922789888000, 355687428096000, 6402373705728000, 121645100408832000, 2432902008176640000 };

int main() {
    int t;
    long long n;
    scanf("%d", &t);
    for (int cas = 1; cas <= t; cas++) {
        scanf("%lld", &n);
        vector<int> pos;
        for (int i = 20; i >= 0; i--) {
            if (fac[i] <= n) {
                n -= fac[i];
                pos.push_back(i);
            }
        }
        printf("Case %d: ", cas);
        if (n == 0 && !pos.empty()) {
            printf("%d!", pos[pos.size() - 1]);
            for (int i = pos.size() - 2; i >= 0; i--) {
                printf("+%d!", pos[i]);
            }
            printf("\n");
        }
        else {
            printf("impossible\n", cas);
        }
    }
    return 0;
}