/*
  Kattis.com
  Problem Odd Gnome.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 05/11/2017.
 */

#include <cstdio>

int main() {
    int n = 0;
    scanf("%d", &n);

    while (n--) {
        int g = 0;
        scanf("%d", &g);

        int last = 0;
        scanf("%d", &last);

        int pos = 0;
        for (int i = 2; i <=g; ++i) {
            int p = 0;
            scanf("%d", &p);

            if (!pos && p != last + 1)
                pos = i;
            last = p;
        }

        printf("%d\n", pos);
    }

    return 0;
}
