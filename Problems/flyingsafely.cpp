/*
  Kattis.com
  Problem Flying Safely
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 05/09/2017
*/

#include <cstdio>

int main() {
    int t = 0;
    scanf("%d", &t);

    while (t--) {
        int n = 0;
        int m = 0;
        scanf("%d %d", &n, &m);

        for (int i = 0; i < m; ++i) {
            int a = 0;
            int b = 0;
            scanf("%d %d", &a, &b);
        }

        printf("%d\n", n - 1);
    }

    return 0;
}
