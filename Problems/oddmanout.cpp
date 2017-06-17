/*
Kattis.com
Problem Odd Man Out.
Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
Date: 11/04/2017
*/

#include <cstdio>

int main() {
    int n = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        int k = 0;
        scanf("%d", &k);

        int odd = 0;
        while (k--) {
            int c = 0;
            scanf("%d", &c);
            odd ^= c;
        }

        printf("Case #%d: %d\n", i, odd);
    }

    return 0;
}
