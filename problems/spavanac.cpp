/*
  Kattis.com
  Problem Spavanac.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 2nd, 2017
 */

#include <cstdio>

const int wake_up = 45;

int main() {
    int hh = 0;
    int mm = 0;

    scanf("%d %d", &hh, &mm);

    if (mm - wake_up >= 0)
        printf("%d %d\n", hh, mm - wake_up);
    else
        if (hh > 0)
            printf("%d %d\n", --hh, (60 - (45 - mm)));
        else
            printf("23 %d\n", (60 - (45 - mm)));

    return 0;
}
