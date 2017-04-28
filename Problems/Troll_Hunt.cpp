/*
  Kattis.com
  Problem Troll Hunt.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 29/04/2017
 */

#include <cstdio>
#include <cmath>

int main() {
    int b = 0;
    int k = 0;
    int g = 0;

    scanf("%d %d %d", &b, &k, &g);
    const int groups = k / g;
    const int days   = (b - 1) / groups;
    printf("%d\n", (b - 1) % groups > 0 ? days + 1 : days);
    
    return 0;
}
