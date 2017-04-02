/*
  Kattis.com
  Problem Pot.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 3rd, 2017
 */

#include <cstdio>

int main() {
    while (1) {
        int n = 0;
        int d = 0;
        scanf("%d %d", &n, &d);

        if (n == 0 && d == 0)
            break;

        printf("%d %d / %d\n", n / d, n % d, d);
    }

    return 0;
}
