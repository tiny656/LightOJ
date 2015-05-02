1212 - Double Ended Queue
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
    int t, n, m, e;
    string op;
    cin >> t;
    for (int cas = 1; cas <= t; cas++) {
        deque<int> dq;
        cin >> n >> m;
        cout << "Case " << cas << ":" << endl;
        for (int i = 0; i < m; i++) {
            cin >> op;
            if (op == "pushLeft") {
                cin >> e;
                if (dq.size() < n) {
                    dq.push_front(e);
                    cout << "Pushed in left: " << e << endl;
                } else {
                    cout << "The queue is full" << endl;
                }
            } else if (op == "pushRight") {
                cin >> e;
                if (dq.size() < n) {
                    dq.push_back(e);
                    cout << "Pushed in right: " << e << endl;
                } else {
                    cout << "The queue is full" << endl;
                }
            } else if (op == "popLeft") {
                if (!dq.empty()) {
                    cout << "Popped from left: " << dq.front() << endl;
                    dq.pop_front();
                } else {
                    cout << "The queue is empty" << endl;
                }
            } else if (op == "popRight") {
                if (!dq.empty()) {
                    cout << "Popped from right: " << dq.back() << endl;
                    dq.pop_back();
                }
                else {
                    cout << "The queue is empty" << endl;
                }
            }
        }
    }
    return 0;
}