1022 - Circle in Square
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;
const double pi = 2 * acos(0.0);
int main() {
    int t;
    double r;
    scanf("%d", &t);
    for (int cas = 1; cas <= t; ++cas) {
        scanf("%lf", &r);
        printf("Case %d: %.2lf\n", cas, r*r*(4-pi));
    }
    return 0;
}