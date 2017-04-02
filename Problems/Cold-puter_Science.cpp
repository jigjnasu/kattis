/*
  Kattis.com
  Problem Cold-puter Science.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 2nd, 2017
 */

#include <cstdio>

int main() {
    int n = 0;
    scanf("%d", &n);

    int freezing_days = 0;
    while (n--) {
        int t = 0;
        scanf("%d", &t);

        if (t < 0)
            ++freezing_days;
    }

    printf("%d\n", freezing_days);

    return 0;
}
