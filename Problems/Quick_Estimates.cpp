/*
  Kattis.com
  Problem Quick Estimates.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 14/04/2017
*/

#include <cstdio>
#include <cmath>

int main() {
    int n = 0;
    scanf("%d", &n);
    
    while (n--) {
        double d = 0;
        scanf("%lf", &d);
        if (d == 0) {
            printf("1\n");
        } else {
            const int result = static_cast<int>(std::floor(std::log10(d) + 1));
            printf("%d\n", result);
        }
    }

    return 0;
}
