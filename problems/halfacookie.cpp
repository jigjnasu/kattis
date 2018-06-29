/*
  Kattis.com
  Problem Half a Cookie.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Reference : http://mathworld.wolfram.com/CircularSegment.html
  Date: 20/11/2017
 */

#include <cstdio>
#include <cmath>

int main() {
    double R = 0.0f;
    double x = 0.0f;
    double y = 0.0f;

    while (scanf("%lf %lf %lf", &R, &x, &y) > 0) {
        if (x * x + y * y >= R * R) {
            printf("miss\n");
        } else {
            const double r = std::sqrt(x * x + y * y);
            const double h = R - r;

            const double a = M_PI * R * R;
            const double s = (R * R) * (std::acos((R - h) / R)) - ((R - h) * std::sqrt((2 * R * h) - (h * h)));

            if (s > a - s)
                printf("%.8lf %.8lf\n", s, a - s);
            else
                printf("%.8lf %.8lf\n", a - s, s);
        }
    }
    return 0;
}
