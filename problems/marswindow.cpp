/*
  Kattis.com
  Problem Mars Window
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 15/03/2020
 */

#include <bits/stdc++.h>

int main() {
    int yy = 0;
    scanf("%d", &yy);

    if (((((yy - 2018) * 12) + 8) % 26) < 12)
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}
