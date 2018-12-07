/*
  Kattis.com
  Problem Qualified Adjusted life year.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 08/12/2018
*/

#include <bits/stdc++.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    double l = 0.0f;
    while (n--) {
        double q = 0.0f;
        double p = 0.0f;
        scanf("%lf %lf", &q, &p);
        l += (q * p);
    }

    printf("%lf\n", l);

    return 0;
}
