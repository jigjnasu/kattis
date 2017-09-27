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

    if (x > 0 && y > 0)
        printf("1\n");
    else if (x < 0 && y > 0)
        printf("2\n");
    else if (x < 0 && y < 0)
        printf("3\n");
    else
        printf("4\n");

    return 0;
}
