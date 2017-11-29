/*
  Kattis.com
  Problem Sjecista
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 24/11/2017
 */

#include <cstdio>

int main() {
    int n = 0;
    scanf("%d", &n);

    int total = 0;
    int j = 0;
    for (int i = 1, j = n - 3; j > 0; ++i, --j)
        total += i * j;

    printf("%d\n", (n * total) / 4);

    return 0;
}
