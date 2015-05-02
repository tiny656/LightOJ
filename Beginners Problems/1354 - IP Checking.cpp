1354 - IP Checking
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
    int ipi[4];
    char ips[50];
    int ipss[4];
    scanf("%d", &t);
    for (int cas = 1; cas <= t; cas++) {
        scanf("%d.%d.%d.%d", &ipi[0], &ipi[1], &ipi[2], &ipi[3]);
        scanf("%s", ips);
        int len = strlen(ips);
        int v = 0, pos = 0;
        for (int i = 0; i < len; i++) {
            if (ips[i] != '.') v = v * 2 + ips[i] - '0';
            else {
                ipss[pos++] = v;
                v = 0;
            }
        }
        ipss[pos++] = v;
        bool ok = false;
        if (ipi[0] == ipss[0]
            && ipi[1] == ipss[1]
            && ipi[2] == ipss[2]
            && ipi[3] == ipss[3])
            ok = true;
        printf("Case %d: %s\n", cas, ok ? "Yes" : "No");
    }
    return 0;
}