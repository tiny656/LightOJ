1214 - Large Division
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
#include <queue>
#include <deque>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    int t;
    long long b, v;
    string a;
    cin >> t;
    for (int cas = 1; cas <= t; cas++) {
        cin >> a >> b;
        if (a[0] == '-') a = a.substr(1);
        b = abs(b);
        v = 0;
        for (int i = 0; i < a.size(); i++) {
            v = ((v * 10) % b + (a[i] - '0') % b) % b;
        }
        cout << "Case " << cas << ": ";
        if (!v) cout << "divisible" << endl;
        else cout << "not divisible" << endl;
    }
    return 0;
}