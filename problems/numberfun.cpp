/*
  Kattis.com
  Problem Darts.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 19/10/2017 (Dipawali)
*/

#include <cstdio>
#include <cmath>

int main() {
    int n = 0;
    scanf("%d", &n);

    while (n--) {
        short a = 0;
        short b = 0;
        short c = 0;
        scanf("%hi %hi %hi", &a, &b, &c);

        const bool res = (c == a + b ||
                          c == std::abs(a - b) ||
                          c == a * b ||
                          a == b * c ||
                          b == a * c);
        printf("%s\n", res ? "Possible" : "Impossible");
    }
    return 0;
}

