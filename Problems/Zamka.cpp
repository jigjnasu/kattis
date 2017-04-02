/*
  Kattis.com
  Problem Zamka.
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
    int L = 0;
    int D = 0;
    int X = 0;

    scanf("%d %d %d", &L, &D, &X);

    int N = 0;
    int M = 0;

    for (int i = L; i <= D; ++i) {
        if (X == sum(i)) {
            N = i;
            break;
        }
    }

    for (int i = D; i >= L; --i) {
        if (X == sum(i)) {
            M = i;
            break;
        }
    }    

    printf("%d\n%d\n", N, M);

    return 0;
}
