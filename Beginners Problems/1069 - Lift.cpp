1069 - Lift
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
    int t, my ,lift;
    scanf("%d", &t);
    for (int cas = 1; cas <= t; ++cas) {
        scanf("%d %d", &my, &lift);
        int ans = abs(lift - my) * 4 + 3 + 3 + 5 + my * 4 + 3 + 5;
        printf("Case %d: %d\n", cas, ans);
    }
    return 0;
}