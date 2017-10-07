/*
  Kattis.com
  Problem Judging Moose.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 08/10/2017
*/

#include <cstdio>

int main() {
    int l = 0;
    int r = 0;
    scanf("%d %d", &l, &r);

    if (l == 0 && r == 0) {
        printf("Not a moose\n");
    } else if (l == r) {
        printf("Even %d\n", l * 2);
    } else {
        if (l > r)
            printf("Odd %d\n", l * 2);
        else
            printf("Odd %d\n", r * 2);
    }

    return 0;
}
