1216 - Juice in the Glass
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
    ios::sync_with_stdio(false);
    int t;
    double r1, r2, h, p;
    cin >> t;
    for (int cas = 1; cas <= t; cas++) {
        cin >> r1 >> r2 >> h >> p;
        double c = h*r2 / (r1 - r2);
        double x = r2*(c + p) / c;
        cout << "Case " << cas << ": " << setiosflags(ios::fixed) << setprecision(9) << M_PI * (x*x*(p + c) - r2*r2*c) / 3. << endl;
    }
    return 0;
}