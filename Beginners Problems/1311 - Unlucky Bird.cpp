1311 - Unlucky Bird
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
    double v1, v2, v3, a1, a2;
    scanf("%d", &t);
    for (int cas = 1; cas <= t; cas++) {
        scanf("%lf%lf%lf%lf%lf", &v1, &v2, &v3, &a1, &a2);
        double t = max(v1 / a1, v2 / a2);
        double d = v1*v1 / (2 * a1) + v2*v2 / (2 * a2);
        printf("Case %d: %.10lf %.10lf\n", cas, d, v3*t);
    }
    return 0;
}