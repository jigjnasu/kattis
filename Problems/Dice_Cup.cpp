/*
  Kattis.com
  Problem Dice Cup.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 05/05/2017
 */

#include <cstdio>

int min(int a, int b) {
    return a < b ? a : b;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    const int s = min(a, b);
    const int e = max(a, b);

    for (int i = s + 1; i <= e + 1; ++i)
        printf("%d\n", i);

    return 0;
}
