/*
  Kattis.com
  Problem Jumbled Compass.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 06/06/2017
*/

#include <cstdio>

int clock(int s, int e) {
    if (s > e)
        return 360 - s + e;
    else
        return e - s;
}

int anti_clock(int s, int e) {
    if (e > s)
        return s + 360 - e;
    else
        return s - e;
}

int main() {
    int s = 0;
    int e = 0;
    scanf("%d %d", &s, &e);

    const int a = clock(s, e);
    const int b = anti_clock(s, e);

    if (a <= b)
        printf("%d\n", a);
    else
        printf("-%d\n", b);

    return 0;
}
