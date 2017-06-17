/*
  Kattis.com
  Problem Tarifa.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 2nd, 2017
 */

#include <cstdio>

int main() {
    int x = 0;
    scanf("%d", &x);

    int n = 0;
    scanf("%d", &n);

    int mb = 0;
    while (n--) {
        int usage = 0;
        scanf("%d", &usage);

        mb += x - usage;
    }

    printf("%d\n", mb + x);
    
    return 0;
}
