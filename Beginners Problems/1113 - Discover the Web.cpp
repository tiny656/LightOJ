1113 - Discover the Web
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
    int t, n;
    string op, url;
    scanf("%d", &t);
    for (int cas = 1; cas <= t; cas++) {
        printf("Case %d:\n", cas);
        vector<string> backward, forward;
        string curPage = "http://www.lightoj.com/";
        while (cin >> op) {
            bool opValid = true;
            if (op == "VISIT") {
                cin >> url;
                backward.push_back(curPage);
                curPage = url;
                forward.clear();
            } else if (op == "BACK") {
                if (backward.empty()) opValid = false;
                else {
                    forward.push_back(curPage);
                    curPage = backward.back();
                    backward.pop_back();
                }
            } else if (op == "FORWARD") {
                if (forward.empty()) opValid = false;
                else {
                    backward.push_back(curPage);
                    curPage = forward.back();
                    forward.pop_back();
                }
            } else if (op == "QUIT") {
                break;
            }
            if (!opValid) puts("Ignored");
            else {
                cout << curPage << endl;
            }
        }
    }
    return 0;
}