/*
  Kattis.com
  Problem Beat the Spread!.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 11/05/2017
*/

#include <cstdio>

int main() {
    int n = 0;
    scanf("%d", &n);

    while (n--) {
        int s = 0;
        int d = 0;
        scanf("%d %d", &s, &d);

        if (d > s)
            printf("impossible\n");
        else if (s % 2 != d % 2)
            printf("impossible\n");
        else
            printf("%d %d\n", (s + d) >> 1,  (s - d) >> 1);
    }

    return 0;
}
