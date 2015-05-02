1072 - Calm Down
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
#define M_PI 3.14159265358979323846
int main() {
    int t;
    double R, n;
    scanf("%d", &t);
    for (int cas = 1; cas <= t; cas++) {
        scanf("%lf %lf", &R, &n);
        double x = cos(2 * M_PI / n);
        printf("Case %d: %.10lf\n", cas, R / (1+sqrt( 2 /(1-x) ) ));
    }
    return 0;
}