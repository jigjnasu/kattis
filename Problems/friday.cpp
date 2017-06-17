/*
  Kattis.com
  Problem Friday the 13th.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 17/06/2017
*/

#include <cstdio>

int main() {
    int t = 0;
    scanf("%d", &t);

    while (t--) {
        int M = 0;
        int D = 0;
        scanf("%d %d", &D, &M);

        int friday = 0;
        int sunday = 1;
        for (int i = 0; i < M; ++i) {
            int d = 0;
            scanf("%d", &d);

            if (sunday == 1 && d >= 13)
                ++friday;
            sunday = (sunday + d) % 7;
        }

        printf("%d\n", friday);
    }

    return 0;
}
