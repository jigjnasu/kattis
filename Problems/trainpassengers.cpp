/*
  Kattis.com
  Problem Train Passengers.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 11/05/2017
*/

#include <cstdio>

int main() {
    long c = 0;
    int n = 0;
    scanf("%ld %d", &c, &n);

    long total = 0;
    long out = 0;
    long in = 0;
    long wait = 0;
    while (n--) {
        scanf("%ld %ld %ld", &out, &in, &wait);

        if (out > total) {
            printf("impossible\n");
            return 0;
        }
        total -= out;

        if (in + total > c) {
            printf("impossible\n");
            return 0;
        }
        total += in;

        if (wait && c != total) {
            printf("impossible\n");
            return 0;
        }
    }

    if (in || total || wait) {
        printf("impossible\n");
        return 0;
    }
    printf("possible\n");

    return 0;
}
