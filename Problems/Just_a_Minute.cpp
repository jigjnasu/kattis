/*
Kattis.com
Problem Just a Minute.
Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
Date: 11/04/2017
*/

#include <cstdio>

int main() {
    int n = 0;
    int t_a = 0;
    int t_b = 0;

    scanf("%d", &n);

    while (n--) {
        int a = 0;
        int b = 0;
        scanf("%d %d", &a, &b);

        t_a += a * 60;
        t_b += b;
    }

    if (1.0f >= t_b / static_cast<double>(t_a))
        printf("measurement error\n");
    else
        printf("%.9lf\n", t_b / static_cast<double>(t_a));

    return 0;
}
