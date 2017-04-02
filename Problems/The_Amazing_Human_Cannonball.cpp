/*
  Kattis.com
  Problem The Amazing Human Cannonball.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 2nd, 2017
 */

#include <cstdio>
#include <cmath>

const double g = 9.81;

double radian(double deg) {
    return deg * M_PI / 180.0;
}

bool trajactory(double v, double a, double x, double h1, double h2) {

    double t = 0.1;
    double last_x_t = 0;
    while (1) {
        double x_t = (v * t) * std::cos(radian(a));
        double y_t = v * t * std::sin(radian(a)) - (0.5 * g * t * t);

#if 0
        printf("x_t == [%lf] || y_t  == [%lf]\n", x_t, y_t);
#endif

        if (x >= last_x_t && x <= x_t)
            if (y_t >= h1 + 1 && y_t <= h2 - 1)
                return true;
            else
                return false;

        if (x_t > x)
            return false;

        last_x_t = x_t;
        t += 0.01;
    }
    
    return true;
}

int main() {
    int n = 0;
    scanf("%d", &n);

    while (n--) {
        double v  = 0;
        double a  = 0;
        double x  = 0;
        double h1 = 0;
        double h2 = 0;
        scanf("%lf %lf %lf %lf %lf",
              &v, &a, &x, &h1, &h2);
        if (trajactory(v, a, x, h1, h2))
            printf("Safe\n");
        else
            printf("Not Safe\n");
    }

    return 0;
}
