/*
  Kattis.com
  Problem Herman.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 29/01/2017
 */

#include <cstdio>
#include <cmath>

int main() {
    double r = 0;
    scanf("%lf", &r);

    printf("%.8lf\n", M_PI * r * r );
    printf("%.8lf\n", r    * 2 * r );

    return 0;
}
