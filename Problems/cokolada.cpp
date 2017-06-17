/*
  Kattis.com
  Problem Cokolada.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 15/04/2017
*/

#include <cstdio>
#include <cmath>

int main() {
    int n = 0;
    scanf("%d", &n);

    int max = 1 << static_cast<int>(std::ceil(std::log2(n)));
    printf("%d ", max);

    if (n == max) {
        printf("0\n");
        return 0;
    }

    int i = 0;
    while (n > 0) {
        max >>= 1;
        if (n >= max)
            n -= max;
        ++i;
    }        
    
    printf("%d\n", i);
    
    return 0;
}
