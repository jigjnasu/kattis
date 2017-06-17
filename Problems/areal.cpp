/*
  Kattis.com
  Problem A Real Challenge.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 07/04/2017
*/

#include <cstdio>
#include <cmath>

int main() {
    double area = 0;
    scanf("%lf", &area);
    printf("%.20lf\n", 4 * std::sqrt(area));

    return 0;
}
