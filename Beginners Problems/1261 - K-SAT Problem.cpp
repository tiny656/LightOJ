1261 - K-SAT Problem
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

vector<int> person[31];
vector<int> solution;
int main() {
    int t, n, m, k, p, e;
    scanf("%d", &t);
    for (int cas = 1; cas<= t; cas++) {
        scanf("%d%d%d", &n, &m, &k);
        for (int i = 0; i < n; i++) person[i].clear();
        solution.clear();
        for (int i = 0; i < n; i++) {
            for (int j = 1; j <= k; j++) {
                scanf("%d", &e);
                person[i].push_back(e);
            }
        }
        scanf("%d", &p);
        for (int i = 0; i < p; i++) {
            scanf("%d", &e);
            solution.push_back(e);
        }
        bool ok = true, find;
        for (int i = 0; i < n; i++) {
            find = false;
            for (int j = 0; j < person[i].size(); j++) {
                int cur = person[i][j];
                if (cur > 0) {
                    find = false;
                    for (int l = 0; l < solution.size(); l++) {
                        if (cur == solution[l]) {
                            find = true;
                            break;
                        }
                    }
                } else {
                    find = true;
                    cur = -cur;
                    for (int l = 0; l < solution.size(); l++) {
                        if (cur == solution[l]) {
                            find = false;
                            break;
                        }
                    }
                }
                if (find) break;
            }
            if (!find) { ok = false; break; }
        }
        printf("Case %d: %s\n", cas, ok ? "Yes" : "No");
    }
    return 0;
}