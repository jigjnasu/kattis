/*
  Kattis.com
  Problem euler's number.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 20/12/2018
*/

#include <bits/stdc++.h>

typedef long double ld;

int main() {
    ld r = 0.0f;
    ld n = 0;
    scanf("%Lf", &n);

    n = std::min(30, static_cast<int>(n));
    ld c = 1;
    for (int i = 1; i <= n + 1; ++i) {
        r += 1 / c;
        c *= i;
    }

    printf("%.32Lf\n", r);

    return 0;
}
