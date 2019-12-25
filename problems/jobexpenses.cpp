/*
  Kattis.com
  Problem Job expenses
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 25/12/2019.
*/

#include <bits/stdc++.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int sum = 0;
    while (n--) {
        int e = 0;
        scanf("%d", &e);
        if (e < 0)
            sum += e;
    }
    printf("%d\n", sum * -1);

    return 0;
}
