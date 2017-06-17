/*
  Kattis.com
  Problem Speed Limit.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 2nd, 2017
 */

#include <cstdio>

int main() {
    int n = 0;

    while (1) {
        scanf("%d", &n);
        if (n == -1)
            break;

        int s  = 0;
        int t1 = 0;
        int t2 = 0;
        int d  = 0;
        while (n--) {
            scanf("%d %d", &s, &t2);

            d += ((t2 - t1) * s);
            t1 = t2;
        }

        printf("%d miles\n", d);
    }
    
    return 0;
}
