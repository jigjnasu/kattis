/*
  Kattis.com
  Problem free food.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 20/12/2018
*/

#include <bits/stdc++.h>

const int d = 365;

int main() {
    int n = 0;
    scanf("%d", &n);

    char f[366] = {0};
    memset(f, '0', d);

    while (n--) {
        int s = 0;
        int e = 0;
        scanf("%d %d", &s, &e);
        memset(f + s - 1, '1', e - s + 1);
    }

    int t = 0;
    for (int i = 0; i < d; ++i)
        if (f[i] == '1')
            ++t;
    printf("%d\n", t);

    return 0;
}
