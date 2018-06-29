/*
  Kattis.com
  Problem Charting Progress.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  18/09/2017
*/

#include <cstdio>

int main() {
    int n = 0;
    scanf("%d", &n);

    while (n--) {
        int r = 0;
        int e = 0;
        int c = 0;

        scanf("%d %d %d", &r, &e, &c);

        if (e - c > r)
            printf("advertise\n");
        else if (e - c == r)
            printf("does not matter\n");
        else
            printf("do not advertise\n");
    }

    return 0;
}
