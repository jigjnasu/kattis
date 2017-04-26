/*
  Kattis.com
  Problem Permuted Arithmetic Sequence.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 26/04/2017
 */

#include <cstdio>

int max(int a, int b) {
    return a > b ? a : b;
}

int swap(int& n) {
    const int l = n / 100;
    const int r = n % 10;
    n = (r * 100) + (n % 100);
    n = ((n / 10) * 10) + l;
}

int main() {
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);

    swap(a);
    swap(b);

    printf("%d\n", max(a, b));
    
    return 0;
}
