/*
  Kattis.com
  Problem Happy Trails.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 09/11/2017
*/

#include <cstdio>
#include <cmath>

inline double to_radian(int angle) {
    return angle * (M_PI / static_cast<double>(180));
}

int main() {
    int n = 0;
    scanf("%d", &n);

    int angle = 0;
    double height = 0;

    while (n--) {
        int a = 0;
        int d = 0;
        scanf("%d %d", &a, &d);

        if (a != 0) {
            height += std::sin(to_radian(a)) * d;
        }
    }

    printf("%.02lf\n", height);

    return 0;
}
