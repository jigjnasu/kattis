/*
Kattis.com
Problem Different Distances.
Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
Date: 13/04/2017
*/

#include <cstdio>
#include <cmath>

int main() {
    while (1) {
        double x1 = 0;
        scanf("%lf", &x1);
        if (x1 == 0)
            break;

        double y1 = 0;
        double x2 = 0;
        double y2 = 0;
        double p  = 0;
        scanf("%lf %lf %lf %lf", &y1, &x2, &y2, &p);

        const double l = std::pow(std::abs(x1 - x2), p);
        const double r = std::pow(std::abs(y1 - y2), p);
        printf("%.10lf\n", std::pow(l + r, 1 / p));
    }
    
    return 0;
}
