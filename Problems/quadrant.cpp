/*
  Kattis.com
  Problem Quadrant Selection.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 27/09/2017
*/

#include <cstdio>

int main() {
    int x = 0;
    int y = 0;
    scanf("%d %d", &x, &y);

    const bool lsb_x = (x >> 31) & 1;
    const bool lsb_y = (y >> 31) & 1;

    if (!lsb_x && !lsb_y)
        printf("1\n");
    else if (lsb_x && !lsb_y)
        printf("2\n");
    else if (lsb_x && lsb_y)
        printf("3\n");
    else
        printf("4\n");

    return 0;
}
