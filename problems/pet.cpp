/*
  Kattis.com
  Problem Pet.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 2nd, 2017
 */

#include <cstdio>

int main() {
    int player = 0;
    int max_score = 0;
    for (int i = 0; i < 5; ++i) {
        int a = 0;
        int b = 0;
        int c = 0;
        int d = 0;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        const int total = a + b + c + d;
        if (total > max_score) {
            player = i + 1;
            max_score = total;
        }
    }

    printf("%d %d\n", player, max_score);

    return 0;
}

