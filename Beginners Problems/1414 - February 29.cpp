1414 - February 29
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

map<string, int> mp;

void init() {
    mp["January"] = 1;
    mp["February"] = 2;
    mp["March"] = 3;
    mp["April"] = 4;
    mp["May"] = 5;
    mp["June"] = 6;
    mp["July"] = 7;
    mp["August"] = 8;
    mp["September"] = 9;
    mp["October"] = 10;
    mp["November"] = 11;
    mp["December"] = 12;
}

int main() {
    init();
    int t;
    char ms1[15], ms2[15];
    int d1, d2, y1, y2;
    scanf("%d", &t);
    for (int cas = 1; cas <= t; cas++) {
        scanf("%s%d, %d", ms1, &d1, &y1);
        scanf("%s%d, %d", ms2, &d2, &y2);
        if (mp[ms1] >= 3) y1++;
        if (mp[ms2] == 1 || (mp[ms2] == 2 && d2 < 29)) y2--;
        y1--;
        int t1 = y1 / 4 - y1 / 100 + y1 / 400;
        int t2 = y2 / 4 - y2 / 100 + y2 / 400;
        printf("Case %d: %d\n", cas, t2 - t1);
    }
    return 0;
}