/*
  Kattis.com
  Problem Pot.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 2nd, 2017
 */

#include <cstdio>

int pow(int x, int y) {
    if (y == 0) {
        return 1;
    } else if (y == 1) {
        return x;
    } else {
        const int t = pow(x, y / 2);
        if (y % 2)
            return x * t * t;
        else
            return t * t;
    }
}

int main() {
    int n = 0;
    scanf("%d", &n);

    int x = 0;

    while (n--) {
        int exp = 0;
        scanf("%d", &exp);
        
        x += pow(exp / 10, exp % 10);
    }

    printf("%d\n", x);

    return 0;
}
