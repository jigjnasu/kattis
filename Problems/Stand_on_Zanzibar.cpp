/*
  Kattis.com
  Problem Cryptographer's Conundrum.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 06/04/2017
 */

#include <cstdio>

int main() {
    int t = 0;
    scanf("%d", &t);

    while (t--) {
        int p = 1;
        int n = -1;
        int alien = 0;
        while (n != 0) {
            scanf("%d", &n);
            if (n > 2 * p)
                alien += n - 2 * p;
            p = n;
        }

        printf("%d\n", alien);
    }

    return 0;
}
