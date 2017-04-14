/*
  Kattis.com
  Problem Cokolada.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 15/04/2017
*/

#include <cstdio>

int main() {
    int n = 0;
    scanf("%d", &n);

    int max = 0;
    int i = 0;
    while (max < n)
        max = (1 << i++);

    printf("%d", max);

    int splits = 1;
    int x = max >> 1;
    int total = x;
    while (1) {
        if (total + (x >> 1) <= n)
            total += x >> 1;
        ++splits;

        if (total == n)
            break;

        x >>= 1;
    }

    printf(" %d\n", splits);

    return 0;
}
