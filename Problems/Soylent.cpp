/*
  Kattis.com
  Problem Soylent.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 07/04/2017
*/

#include <cstdio>
#include <cmath>

int main() {
    int n = 0;
    scanf("%d", &n);

    while (n--) {
        int c = 0;
        scanf("%d" ,&c);

        printf("%.0f\n", std::ceil(c / static_cast<double>(400.0f)));
    }

    return 0;
}
