1182 - Parity
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;
int main() {
    int t, e;
    scanf("%d", &t);
    for (int cas = 1; cas <= t; cas++) {
        scanf("%d", &e);
        int cnt = 0;
        while (e) {
            cnt++;
            e = e & (e - 1);
        }
        printf("Case %d: %s\n", cas, cnt % 2 ? "odd" : "even");
    }
    return 0;
}