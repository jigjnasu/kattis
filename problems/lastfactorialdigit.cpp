/*
  Kattis.com
  Problem Last factorial digit.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 28/11/2018
 */

#include <bits/stdc++.h>

int main() {
    int t = 0;
    scanf("%d", &t);

    while (t--) {
        int n = 0;
        scanf("%d", &n);

        int r = 1;
        for (int i = 1; i <= n; ++i) {
            r *= i;
            r %= 10;
        }

        printf("%d\n", r);
    }

    return 0;
}
