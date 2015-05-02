1109 - False Ordering
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
    return (a.second == b.second) ? (a.first > b.first) : (a.second < b.second);
}

int main() {
    int t, n;
    pair<int, int> cnt[1005];
    for (int i = 1; i <= 1000; i++) {
        cnt[i].first = i;
        for (int j = 1; i*j <= 1000; j++) {
            cnt[i*j].second += 1;
        }
    }
    sort(cnt + 1, cnt + 1001, cmp);
    scanf("%d", &t);
    for (int cas = 1; cas <= t; cas++) {
        scanf("%d", &n);
        printf("Case %d: %d\n", cas, cnt[n].first);
    }
    return 0;
}