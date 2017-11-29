/*
  Kattis.com
  Problem Star Arrangements
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 29/11/2017
*/

#include <cstdio>
#include <cmath>

int main() {
    int n = 0;
    scanf("%d", &n);

    printf("%d:\n", n);
    for (int x = 2; x < n; ++x) {
        if (n % (x + x - 1) == 0 || n % (x + x - 1) == x)
            printf("%d,%d\n", x, x - 1);
        if (n % x == 0)
            printf("%d,%d\n", x, x);
    }

    return 0;
}

