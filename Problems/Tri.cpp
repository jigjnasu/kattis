/*
  Kattis.com
  Problem Tri.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 2nd, 2017
 */

#include <cstdio>

bool sum(int a, int b, int c) {
    if (a == b + c) {
        printf("%d=%d+%d\n", a, b, c);
        return true;
    } else if (a + b == c) {
        printf("%d+%d=%d\n", a, b, c);
    }

    return false;
}

bool sub(int a, int b, int c) {
    if (a == b - c) {
        printf("%d=%d-%d\n", a, b, c);
        return true;
    } else if (a - b == c) {
        printf("%d-%d=%d\n", a, b, c);
    }

    return false;    
}

bool mul(int a, int b, int c) {
    if (a == b * c) {
        printf("%d=%d*%d\n", a, b, c);
        return true;
    } else if (a * b == c) {
        printf("%d*%d=%d\n", a, b, c);
    }

    return false;    
}

bool div(int a, int b, int c) {
    if (a == b / c) {
        printf("%d=%d/%d\n", a, b, c);
        return true;
    } else if (a / b == c) {
        printf("%d/%d=%d\n", a, b, c);
    }

    return false;    
}

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);

    if (!sum(a, b, c))
        if (!sub(a, b, c))
            if (!mul(a, b, c))
                div(a, b, c);

    return 0;
}
