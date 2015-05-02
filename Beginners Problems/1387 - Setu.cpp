1387 - Setu
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
    int t, n, money;
    string op;
    cin >> t;
    for (int cas = 1; cas <= t; cas++) {
        cin >> n;
        int amount = 0;
        cout << "Case " << cas << ":" << endl;
        for (int i = 0; i < n; i++) {
            cin >> op;
            if (op == "report") cout << amount << endl;
            else {
                cin >> money;
                amount += money;
            }
        }
    }
    return 0;
}