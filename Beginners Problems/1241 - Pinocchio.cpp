1241 - Pinocchio
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
    int t, n, e;
    scanf("%d", &t);
    for (int cas = 1; cas<= t; cas++) {
        scanf("%d", &n);
        vector<int> v;
        int prev = 2, cnt = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &e);
            if (e - prev > 0) {
                if (e - prev > 5) cnt += (e - prev - 1) / 5 + 1;
                else cnt += 1;
            }
            prev = e;
        }
        printf("Case %d: %d\n", cas, cnt);
    }
    return 0;
}