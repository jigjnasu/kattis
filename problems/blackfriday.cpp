/*
  Kattis.com
  Problem Black Friday.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 29/01/2017
 */

#include <cstdio>
#include <vector>

int main() {
    int array[6] = {0};

    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t = 0;
        scanf("%d", &t);
        if (array[t - 1] == 0)
            array[t - 1] = i + 1;
        else
            array[t - 1] = -1;
    }

    for (int i = 5; i >= 0; --i) {
        if (array[i] > 0) {
            printf("%d\n", array[i]);
            return 0;
        }
    }

    printf("none\n");

    return 0;
}
