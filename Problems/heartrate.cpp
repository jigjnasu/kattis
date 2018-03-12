/*
  Kattis.com
  Problem Heart Rate.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 12/03/2018
*/

#include <bits/stdc++.h>

int main() {
    int t = 0;
    scanf("%d", &t);

    while (t--) {
        double b = 0.0f;
        double p = 0.0f;
        scanf("%lf %lf", &b, &p);

        const double t   = 60 / p;
        const double bpm = t * b;
        printf("%.08lf %.08lf %.08lf\n", bpm - t, bpm, bpm + t);
    }

    return 0;
}
