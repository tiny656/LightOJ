1211 - Intersection of Cubes
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
    int t, n, x1, x2, y1, y2, z1, z2;
    cin >> t;
    for (int cas = 1; cas <= t; cas++) {
        cin >> n;
        int topx, topy, topz, bottomx, bottomy, bottomz;
        topx = topy = topz = 1001;
        bottomx = bottomy = bottomz = -1;
        while (n--) {
            cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
            topx = min(x2, topx);
            topy = min(y2, topy);
            topz = min(z2, topz);
            bottomx = max(x1, bottomx);
            bottomy = max(y1, bottomy);
            bottomz = max(z1, bottomz);
        }

        cout << "Case " << cas << ": ";
        if (topx >= bottomx && topy >= bottomy && topz >= bottomz)
            cout << (topx - bottomx)*(topy - bottomy)*(topz - bottomz) << endl;
        else
            cout << "0" << endl;
    }

    return 0;
}