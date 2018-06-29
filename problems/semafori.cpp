/*
  Kattis.com
  Problem Semafori.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 28/06/2017
*/

#include <cstdio>

int main() {
    int n = 0;
    int l = 0;
    scanf("%d %d", &n, &l);

    int last_stop = 0;
    int t = 0;
    while (n--) {
        int d = 0;
        int r = 0;
        int g = 0;
        scanf("%d %d %d", &d, &r, &g);

        t += d - last_stop;
        const int s = t % (r + g);
        if (s <= r)
            t += r - s;

        last_stop = d;
    }

    t += l - last_stop;

    printf("%d\n", t);

    return 0;
}

