/*
  Kattis.com
  Problem Skocimis.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 3rd, 2017
 */

#include <cstdio>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);

    int distance = b - a - 1;
    if (c - b - 1 > distance)
        distance = c - b - 1;

    printf("%d\n", distance);
    
    return 0;
}
