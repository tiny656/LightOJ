1338 - Hidden Secret!
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
    string s1, s2;
    cin >> t;
    cin.get();
    for (int cas = 1; cas <= t; cas++) {
        getline(cin, s1, '\n');
        getline(cin, s2, '\n');
        for (int i = 0; i < s1.size(); i++)
            s1[i] = tolower(s1[i]);
        for (int i = 0; i < s2.size(); i++)
            s2[i] = tolower(s2[i]);
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        while (s1.size() > 0 && s1[0] == ' ') s1 = s1.substr(1);
        while (s2.size() > 0 && s2[0] == ' ') s2 = s2.substr(1);
        bool ok = true;
        if (s1.size() != s2.size()) {
            ok = false;
        } else {
            for (int i = 0; i < s1.size(); i++) {
                if (s1[i] != s2[i]) {
                    ok = false;
                    break;
                }
            }
        }
        cout << "Case " << cas << ": " << (ok ? "Yes" : "No") << endl;
    }
    return 0;
}