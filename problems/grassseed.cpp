/*
  Kattis.com
  Problem Grass Seed Inc.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 2nd, 2017
 */

#include <cstdio>

int main() {
    double c = 0;
    scanf("%lf", &c);

    int l = 0;
    scanf("%d", &l);

    double total = 0;
    while (l--) {
        double w = 0;
        double l = 0;
        scanf("%lf %lf", &w, &l);

        total += (c * w * l);
    }

    printf("%.7f\n", total);

    return 0;
}
