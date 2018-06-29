/*
  Kattis.com
  Problem FizzBuzz.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 2nd, 2017
 */

#include <cstdio>

int main() {
    int x = 0;
    int y = 0;
    int n = 0;

    scanf("%d %d %d", &x, &y, &n);

    for (int i = 1; i <= n; ++i) {
        if ((i % x == 0) && (i % y == 0))
            printf("FizzBuzz\n");
        else if (i % x == 0)
            printf("Fizz\n");
        else if (i % y == 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }

    return 0;
}
