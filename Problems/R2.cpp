/*
  Kattis.com
  Problem R2.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 2nd, 2017
 */

#include <cstdio>

int main() {
    int r1 = 0;
    int s  = 0;

    scanf("%d %d", &r1, &s);

    printf("%d\n", 2 * s - r1);
    
    return 0;
}
