/*
  Kattis.com
  Problem Parking.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 18/08/2017
*/

#include <cstdio>

int main() {
    int t = 0;
    scanf("%d", &t);

    while (t--) {
        int n = 0;
        scanf("%d", &n);

        int min = 100;
        int max = 0;
        while (n--) {
            int s = 0;
            scanf("%d", &s);

            if (s < min)
                min = s;
            if (s > max)
                max = s;
        }

        printf("%d\n", 2 * (max - min));
    }

    return 0;
}
