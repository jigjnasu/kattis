/*
  Kattis.com
  Problem Cetvrta.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 2nd, 2017
 */

#include <cstdio>

int main() {
    int p_x = 0;
    int p_y = 0;

    for (int i = 0; i < 3; ++i) {
        int x = 0;
        int y = 0;
        scanf("%d %d", &x, &y);
        p_x ^= x;
        p_y ^= y;
    }

    printf("%d %d\n", p_x, p_y);

    return 0;
}
