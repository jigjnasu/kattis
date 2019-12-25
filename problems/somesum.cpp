/*
  Kattis.com
  Problem Some sum
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 25/12/2019.
*/

#include <bits/stdc++.h>

bool is_log2(int n) {
    double a = std::log2(n);
    return a == static_cast<int>(a);
}

int main() {
    int n = 0;
    scanf("%d", &n);

    if (n == 1)
        printf("Either\n");
    else if (n == 2)
        printf("Odd\n");
    else if (n & 1 == true)
        printf("Either\n");
    else if (is_log2(n))
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}
