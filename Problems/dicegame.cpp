/*
  Kattis.com
  Problem Dice Game.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 29/04/2017
 */

#include <cstdio>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int p = 0;
    int q = 0;
    int r = 0;
    int s = 0;
    scanf("%d %d %d %d", &p, &q, &r, &s);

    const int gunnar = a + b + c + d;
    const int emma   = p + q + r + s;
    if (gunnar == emma)
        printf("Tie\n");
    else if (gunnar > emma)
        printf("Gunnar\n");
    else
        printf("Emma\n");

    return 0;
}
