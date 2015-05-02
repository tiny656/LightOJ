1042 - Secret Origins
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    int t, n, bit[32];
    scanf("%d", &t);
    for (int cas = 1; cas <= t; ++cas) {
        scanf("%d", &n);
        int tmp = n;
        memset(bit, 0, sizeof(bit));
        for (int i = 0; i < 32 && tmp != 0; i++) {
            if (tmp & 0x01 == 1) {
                bit[i] = 1;
            } else {
                bit[i] = 0;
            }
            tmp >>= 1;
        }
        int pos = -1;
        for (int i = 1; i < 32; i++) {
            if (bit[i - 1] == 1 && bit[i] == 0) {
                swap(bit[i - 1], bit[i]);
                pos = i - 2;
                break;
            }
        }
        int cnt1 = 0;
        for (int i = pos; i >= 0; i--) {
            if (bit[i] == 1) cnt1++;
            bit[i] = 0;
        }
        for (int i = 0; i < cnt1; i++) {
            bit[i] = 1;
        }

        int ans = 0;
        for (int i = 31; i >= 0; i--)
            ans = ans * 2 + bit[i];
        printf("Case %d: %d\n", cas, ans);
    }
    return 0;
}