/*
  Kattis.com
  Problem Faktor.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 29/04/2017.
 */

#include <cstdio>

int main() {
    int a = 0;
    int i = 0;
    scanf("%d %d", &a, &i);

    printf("%d\n", (a * (i - 1)) + 1);

    return 0;
}
