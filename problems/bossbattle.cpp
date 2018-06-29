/*
  Kattis.com
  Problem Boss Battle.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 05/12/2017
*/

#include <cstdio>

int main() {
    int n = 0;
    scanf("%d", &n);

    if (n <= 2)
        printf("1\n");
    else
        printf("%d\n", n - 2);

    return 0;
}
