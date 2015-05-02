1433 - Minimum Arc Distance
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

double getDis(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

int main() {
    ios::sync_with_stdio(false);
    int t;
    double ox, oy, ax, ay, bx, by;
    cin >> t;
    for (int cas = 1; cas <= t; cas++) {
        cin >> ox >> oy >> ax >> ay >> bx >> by;
        double OA = getDis(ox, oy, ax, ay);
        double OB = getDis(ox, oy, bx, by);
        double AB = getDis(ax, ay, bx, by);
        double alpha = acos((OA*OA + OB*OB - AB*AB) / (2 * OA*OB));
        double len = alpha * OA;
        cout << "Case " << cas << ": " << setiosflags(ios::fixed) << setprecision(10) << len << endl;
    }
    return 0;
}