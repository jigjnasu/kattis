/*
  Kattis.com
  Problem Railroad.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 12th, 2018
 */

#include <bits/stdc++.h>

int main() {
    int x = 0;
    int y = 0;
    scanf("%d %d", &x, &y);
    printf("%s\n", y % 2 ? "impossible" : "possible");

    return 0;
}

