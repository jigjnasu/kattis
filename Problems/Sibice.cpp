/*
  Kattis.com
  Problem Sibice.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 09/05/2017
*/

#include <cstdio>
#include <cmath>

int main() {
    int n = 0;
    int w = 0;
    int h = 0;
    scanf("%d %d %d", &n, &w, &h);

    const double hyp = std::sqrt(w * w + h * h);

    while (n--) {
        int length = 0;
        scanf("%d", &length);

        if (length <= w || length <= h || length <= hyp)
            printf("DA\n");
        else
            printf("NE\n");
    }

    return 0;
}
