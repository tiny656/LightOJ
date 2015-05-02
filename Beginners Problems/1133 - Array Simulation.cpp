1133 - Array Simulation
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;
int arr[105];
void doSomething(int arr[], int len, int type, int val) {
    for (int i = 0; i < len; i++) {
        if (type == 1) arr[i] += val;
        else if (type == 2) arr[i] *= val;
        else if (type == 3) arr[i] /= val;
    }
}
int main() {
    int t, n , m, a, b;
    string op;
    scanf("%d", &t);
    for (int cas = 1; cas <= t; cas++) {
        bool rev = false;
        scanf("%d%d", &n, &m);
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        for (int i = 0; i < m; i++) {
            cin >> op;
            if (op == "S") {
                scanf("%d", &a);
                doSomething(arr, n, 1, a);
            } else if (op == "M") {
                scanf("%d", &a);
                doSomething(arr, n, 2, a);
            } else if (op == "D") {
                scanf("%d", &a);
                doSomething(arr, n, 3, a);
            } else if (op == "R") {
                reverse(arr, arr + n);
            } else if (op == "P") {
                scanf("%d%d", &a, &b);
                swap(arr[a], arr[b]);
            }
        }
        printf("Case %d:\n", cas);
        printf("%d", arr[0]);
        for (int i = 1; i < n; i++) {
            printf(" %d", arr[i]);
        }
        puts("");
    }
    return 0;
}