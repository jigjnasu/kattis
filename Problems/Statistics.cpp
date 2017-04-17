/*
  Kattis.com
  Problem Statistics.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 17/04/2017
*/

#include <cstdio>
#include <cstdlib>

int main() {
    int test_case = 1;
    char n[8] = {0};
    while (scanf("%s", n) == 1) {
        int min = 1000001;
        int max = -1000001;
        int i = std::atoi(n);
        while (i--) {
            int v = 0;
            scanf("%d", &v);
            if (v < min)
                min = v;
            if (v > max)
                max = v;
        }

        printf("Case %d: %d %d %d\n", test_case++, min, max, max - min);
    }

    return 0;
}
