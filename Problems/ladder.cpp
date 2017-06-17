/*
  Kattis.com
  Problem Ladder.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 2nd, 2017
 */

#include <cstdio>
#include <cmath>

double degrees_to_radian(double deg) {
    return deg * M_PI / 180.0;
}

int main() {
    int h = 0;
    int v = 0;

    scanf("%d %d", &h, &v);
    printf("%.0f\n",  std::ceil(h / std::sin(degrees_to_radian(v))));

    return 0;
}
