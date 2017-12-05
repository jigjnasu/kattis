/*
  Kattis.com
  Problem Billiard.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 05/12/2017
*/

#include <cstdio>
#include <cmath>

int main() {
    while (1) {
        int a = 0;
        int b = 0;
        int s = 0;
        int m = 0;
        int n = 0;
        scanf("%d %d %d %d %d", &a, &b, &s, &m, &n);

        if (!a && !b && !s && !m && !n)
            break;

        const double x = a * m;
        const double y = b * n;
        const double t = std::sqrt(x * x + y * y);
        const double angle    = 180 * std::asin(y / t) / M_PI;
        const double velocity = t / s;

        printf("%.02lf %.02lf\n", angle, velocity);
    }

    return 0;
}

