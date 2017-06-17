/*
  Kattis.com
  Problem Pizza Crust.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 29/04/2017.
 */

/*
  Area of the whole pizza = pi * r * r
  Area of the cheese = whole - area - (whole - area - crust area)
  (r - c) ^ 2 / r * r = (r ^ 2 + c ^ 2 - 2 * r * c) / r * r
 */

#include <cstdio>

int main() {
    double r = 0;
    double c = 0;
    scanf("%lf %lf", &r, &c);

    printf("%.10lf\n", ((r * r + c * c - 2 * r * c) / (r * r) * 100.0f));

    return 0;
}
