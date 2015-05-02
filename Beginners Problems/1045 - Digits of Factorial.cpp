1045 - Digits of Factorial
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <algorithm>
#define _MATH_DEFINES_DEFINED
using namespace std;
#define M_PI 3.14159265358979323846
int main() {
    int t;
    double n, b, ans;
    scanf("%d", &t);
    for (int cas = 1; cas <= t; ++cas) {
        scanf("%lf %lf", &n, &b);
        if (n == 0 || n == 1) {
            ans = 1;
        } else {
            ans = log(sqrt(2 * M_PI*n)) / log(b) + n*log(n / exp(1)) / log(b);
            ans = floor(ans) + 1;
        }
        printf("Case %d: %.0lf\n", cas, ans);
    }
    return 0;
}