/*
  Kattis.com
  Problem Batter Up.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 05/11/2017
*/

#include <cstdio>

int main() {
    int n = 0;
    scanf("%d", &n);

    int official = n;
    int total = 0;
    while (n--) {
        int run = 0;
        scanf("%d", &run);

        if (run == -1)
            --official;
        else
            total += run;
    }

    printf("%.10lf\n", total / static_cast<double>(official));

    return 0;
}
