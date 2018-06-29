/*
  Kattis.com
  Problem Sum Kind Of Problem
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 3rd, 2017
 */

#include <cstdio>

int main() {
    int n = 0;
    scanf("%d", &n);

    while (n--) {
        int k = 0;
        int n = 0;
        scanf("%d %d", &k, &n);

        const int s1 = (n * (n + 1)) >> 1;
        const int s2 = ((2 + ((n - 1) * 2)) * n) >> 1;
        const int s3 = ((4 + ((n - 1) * 2)) * n) >> 1;

        printf("%d %d %d %d\n", k, s1, s2, s3);
    }
    
    return 0;
}
