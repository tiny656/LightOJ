1331 - Agent J
#define _CRT_SECURE_NO_DEPRECATE
#define _SECURE_SCL 0
#pragma comment(linker, "/STACK:66777216")
#define _USE_MATH_DEFINES
#include <algorithm>
#include <string>
#include <complex>
#include <cassert>
#include <memory>
#include <set>
#include <stack>
#include <map>
#include <list>
#include <deque>
#include <numeric>
#include <cctype>
#include <cstddef>
#include <vector>
#include <queue>
#include <iostream>
#include <iomanip>
#include <iterator>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <ctime>
#include <cstring>
#include <functional>
#include <bitset>
using namespace std;

int main() {
    int t;
    double r1, r2, r3;
    scanf("%d", &t);
    for (int cas = 1; cas <= t; cas++) {
        scanf("%lf%lf%lf", &r1, &r2, &r3);
        double h = sqrt(r1*r2*r3 / (r1 + r2 + r3));
        double a = atan2(h, r1);
        double b = atan2(h, r2);
        double c = atan2(h, r3);
        double s = h*(r1 + r2 + r3) - (a*r1*r1 + b*r2*r2 + c*r3*r3);
        printf("Case %d: %.10lf\n", cas, s);
    }
    return 0;
}