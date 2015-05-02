1305 - Area of a Parallelogram
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
    int t, ax, ay, bx, by, cx, cy;
    scanf("%d", &t);
    for (int cas = 1; cas <= t; cas++) {
        scanf("%d%d%d%d%d%d", &ax, &ay, &bx, &by, &cx, &cy);
        int A = by - ay;
        int B = ax - bx;
        int C = (bx - ax)*by - (by - ay)*bx;
        int dx = ax + (cx - bx);
        int dy = ay + (cy - by);
        int S = abs(A*dx + B*dy + C);
        printf("Case %d: %d %d %d\n", cas, dx, dy, S);
    }
    return 0;
}