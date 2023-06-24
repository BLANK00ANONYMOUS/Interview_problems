#include<bits/stdc++.h>
using namespace std;


int calc(int num, int base) {
    if (num == 0) {
        return 0;
    }

    return calc(num / base, base) * 10 + num % base;
}

int findNumber(int n) {
    int res = calc(n - 1, 6);
    return res;
}