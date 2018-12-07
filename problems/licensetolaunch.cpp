/*
  Kattis.com
  Problem liscence to launch.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 08/12/2018
*/

#include <bits/stdc++.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int d = 0;
    int m = 1e+9 + 1;
    for (int i = 0; i < n; ++i) {
        int k = 0;
        scanf("%d", &k);
        if (k < m) {
            m = k;
            d = i;
        }
    }

    printf("%d\n", d);
    return 0;
}
