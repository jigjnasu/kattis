/*
  Kattis.com
  Problem Riječi.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 18/04/2017
*/

#include <cstdio>

void fibo(int k, int& second_last, int& last) {
    if (k == 1) {
        second_last = 0;
        last = 1;
        return;
    }
    
    if (k == 2) {
        second_last = 1;
        last = 1;
        return;
    }
    
    int a = 1;
    int b = 1;
    int c = a + b;
    for (int i = 4; i <= k; ++i) {
        a = b;
        b = c;
        c = a + b;
    }

    second_last = b;
    last = c;
}

int main() {
    int k = 0;
    scanf("%d", &k);

    int a = 0;
    int b = 0;
    fibo(k, a, b);

    printf("%d %d\n", a, b);
    
    return 0;
}
