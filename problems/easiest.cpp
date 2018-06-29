/*
  Kattis.com
  Problem The Easiest Problem Is This One.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 2nd, 2017
 */

#include <cstdio>

int sum(int n) {
    int s = 0;

    while (n) {
        s += n % 10;
        n /= 10;
    }

    return s;
}

int main() {
    while (1) {
        int n = 0;
        scanf("%d", &n);
        if (n == 0)
            break;

        int i = 11;
        const int x = sum(n);
        while (x != sum(n * i++));
        printf("%d\n", i - 1);
    }
    
    return 0;
}
