/*
  Kattis.com
  Problem Planting Trees.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 20/04/2017
*/

#include <cstdio>

int main() {
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);

    if (n < m)
        if (m - n > 1)
            printf("Dr. Chaz will have %d pieces of chicken left over!\n", m - n);
        else
            printf("Dr. Chaz will have %d piece of chicken left over!\n", m - n);
    else
        if (n - m > 1)
            printf("Dr. Chaz needs %d more pieces of chicken!\n", n - m);
        else
            printf("Dr. Chaz needs %d more piece of chicken!\n", n - m);

    return 0;
}
