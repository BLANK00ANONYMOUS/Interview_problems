#include <bits/stdc++.h>

int binexp(int a, int b, int m) {
    int res = 1;
    while (b > 0) {
        if (b & 1) {
            res = (res * 1LL * a) % m;
        }
        a = (a * 1LL * a) % m;
        b >>= 1;
    }
    return res;
}

int solve(int a, int b, int c, int m) {
    int cInverse = binexp(c, m - 2, m);
    int aPowerb = binexp(a, b, m);
    int res = ((aPowerb % m) * (cInverse % m)) % m;
    return res;
}