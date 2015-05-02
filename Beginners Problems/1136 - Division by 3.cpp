1136 - Division by 3
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
    long long a, b;
    scanf("%d", &t);
    for (int cas = 1; cas <= t; cas++) {
        scanf("%lld%lld", &a, &b);
        long long cnt = 0;
        cnt += b / 3 - a / 3 + ((a % 3) == 0 ? 1 : 0);
        cnt += (b + 1) / 3 - (a + 1) / 3 + (((a + 1) % 3) == 0 ? 1 : 0);
        printf("Case %d: %lld\n", cas, cnt);
    }
    return 0;
}