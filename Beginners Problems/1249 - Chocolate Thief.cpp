1249 - Chocolate Thief
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
struct Item {
    string name;
    int val;
};

int main() {
    int t, n, l, w, h;
    string name;
    scanf("%d", &t);
    for (int cas = 1; cas<= t; cas++) {
        vector<Item> v;
        Item item;
        int sum = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            cin >> item.name >> l >> w >> h;
            item.val = l*w*h;
            sum += item.val;
            v.push_back(item);
        }

        int key = sum / n;
        string a, b;
        bool ok = false;
        for (int i = 0; i < n; i++) {
            if (v[i].val > key) {
                ok = true;
                a = v[i].name;
            } else if (v[i].val < key) {b = v[i].name; }
        }
        printf("Case %d: ", cas);
        if (!ok) puts("no thief");
        else cout << a << " took chocolate from " << b << endl;
    }
    return 0;
}