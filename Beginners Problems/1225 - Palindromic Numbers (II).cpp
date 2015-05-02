1225 - Palindromic Numbers (II)
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

bool isPalindromic(string s) {
    for (int i = 0; i < s.size() / 2; i++) {
        if (s[i] != s[s.size() - i - 1]) return false;
    }
    return true;
}

int main() {
    //ios::sync_with_stdio(false);
    int t;
    char s[20];
    scanf("%d", &t);
    for (int cas = 1; cas <= t; cas++) {
        scanf("%s", s);
        printf("Case %d: ", cas);
        if (isPalindromic(s)) puts("Yes");
        else puts("No");
    }
    return 0;
}