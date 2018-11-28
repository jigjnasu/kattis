/*
  Kattis.com
  Problem harshd numbers.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 28/11/2018
 */

#include <bits/stdc++.h>

inline bool is_harsh(int n) {
    int s = 0;

    int m = n;
    while (n) {
        s += n % 10;
        n /= 10;
    }

    return m % s == 0;
}

int main() {
    int n = 0;
    scanf("%d", &n);

    while (1) {
        if (is_harsh(n)) {
            printf("%d\n", n);
            break;
        }
        ++n;
    }

    return 0;
}

