/*
  Kattis.com
  Problem Jumbled Communication.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 14/04/2017
*/

#include <cstdio>

int main() {
    int n = 0;
    scanf("%d", &n);

    while (n--) {
        int y = 0;
        scanf("%d", &y);

        int x = (1 << 0) & y;
        // As we know there is a limit on these numbers 255.
        // So it can have maximum of < 2^8
        for (int i = 1; i < 8; ++i) {
            const int a = (x & (1 << i - 1)) ? 1 : 0;
            const int b = (y & (1 << i)) ? 1 : 0;
            if (a ^ b)
                x += 1 << i;
        }

        printf("%d ", x);
    }

    printf("\n");
    
    return 0;
}
