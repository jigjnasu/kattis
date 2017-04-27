/*
  Kattis.com
  Problem Shopaholic.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 27/04/2017
*/

#include <cstdio>

int main() {
    int t = 0;
    scanf("%d", &t);
    
    while (t--) {
        int k = 0;
        scanf("%d", &k);

        printf("%d\n", (1 << k) - 1);
    }

    return 0;
}
