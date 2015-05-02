1053 - Higher Math
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
    int t;
    double e[3], a, b, c;
    scanf("%d", &t);
    for (int cas = 1; cas <= t; ++cas) {
        scanf("%lf %lf %lf", &e[0], &e[1], &e[2]);
        a = min(min(e[0], e[1]), e[2]);
        c = max(max(e[0], e[1]), e[2]);
        b = e[0] + e[1] + e[2] - a - c;
        bool ok = false;
        if ( fabs(a*a + b*b - c*c) <= 1e-5 &&
            (a+b) > c && fabs(a-b) < c) {
            ok = true;
        }
        printf("Case %d: %s\n", cas, ok ? "yes" : "no");
    }
    return 0;
}