/*
Kattis.com
Problem Server.
Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
Date: 14/04/2017
*/

#include <cstdio>

int main() {
    int n = 0;
    int t = 0;
    scanf("%d %d", &n, &t);

    int i = 0;
    while (n--) {
        int v = 0;
        scanf("%d", &v);
        
        if (t - v >= 0) {
            t -= v;
            ++i;
        } else {
            t = 0;
        }
    }

    printf("%d\n", i);

    return 0;
}
