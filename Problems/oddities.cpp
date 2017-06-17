/*
  Kattis.com
  Problem Pot.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 2nd, 2017
 */

#include <cstdio>

int main() {
    int n = 0;
    scanf("%d", &n);
    
    while (n--) {
        int x = 0;
        scanf("%d", &x);

        if (x % 2)
            printf("%d is odd\n", x);
        else
            printf("%d is even\n", x);
    }
    return 0;
}
