/*
  Kattis.com
  Problem Take Two Stones.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 2nd, 2017
 */

#include <cstdio>

int main() {
    int n = 0;
    scanf("%d", &n);

    if (n % 2)
        printf("Alice\n");
    else
        printf("Bob\n");

    return 0;
}
