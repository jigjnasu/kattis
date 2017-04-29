/*
  Kattis.com
  Problem Estimating the Area of a Circle.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 29/01/2017
*/

/*
  Let's the square has the side = x.
  And r is the radius of the circle.
  So according to Pyhtagorus theorem.
  x ^ 2 + x ^ 2 = (2r) ^ 2
  (2x) ^ 2 = (2r) ^ 2
  4x ^ 2 = 4r ^ 2
  x = r.
  Therefore, Area of square is 4 * 2r
*/

#include <cstdio>
#include <cmath>

int main() {
    while (1) {
        double r = 0;
        double m = 0;
        double c = 0;
        scanf("%lf %lf %lf", &r, &m, &c);

        if (r == 0 &&
            m == 0 &&
            c == 0)
            break;

        printf("%.8lf %.8lf\n", M_PI * r * r, 4 * r * r * (c / m));
    }

    return 0;
}
