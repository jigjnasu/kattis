/*
  Kattis.com
  Problem: Chanukah Challenge
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 24/04/2019
 */

#include <bits/stdc++.h>

inline int candles(int d) {
    return (((d + 1) * (d + 2)) >> 1) - 1;
}

int main() {
    int t = 0;
    scanf("%d", &t);

    while (t--) {
        int k = 0;
        int d = 0;
        scanf("%d %d", &k, &d);
        printf("%d %d\n", k, candles(d));
    }
    return 0;
}
