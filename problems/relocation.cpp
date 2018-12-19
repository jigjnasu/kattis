/*
  Kattis.com
  Problem relocation.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 20/12/2018
*/

#include <bits/stdc++.h>

int main() {
    int n = 0;
    int q = 0;
    scanf("%d %d", &n, &q);

    std::vector<int> line(n, 0);
    for (int i = 1; i <= n; ++i) {
        int l = 0;
        scanf("%d", &l);
        line[i - 1] = l;
    }

    while (q--) {
        int w = 0;
        int a = 0;
        int b = 0;
        scanf("%d %d %d", &w, &a, &b);

        if (w == 1)
            line[a - 1] = b;
        else
            printf("%d\n", std::abs(line[a - 1] - line[b - 1]));
    }

    return 0;
}
