/*
  Kattis.com
  Problem Curse the Darkness.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 17/06/2017
*/

#include <cstdio>
#include <cmath>

int main() {
    int t = 0;
    scanf("%d", &t);

    while (t--) {
        // Book coordinates
        float x = 0;
        float y = 0;

        scanf("%f %f", &x, &y);

        int candles = 0;
        bool read = false;
        scanf("%d", &candles);

        while (candles--) {
            // Candle coordinates
            float a = 0;
            float b = 0;
            scanf("%f %f", &a, &b);

            // Let's check the Cartesian coordinates of a circle.
            // (x - a) ^ 2 + (y - b) ^ 2 = r ^ 2
            // As the candle radius is 8 meters
            const float p = std::abs(x - a);
            const float q = std::abs(y - b);
            
            if ((p * p) + (q * q) <= 64.0f) {
                read = true;
            }
        }

        if (read)
            printf("light a candle\n");
        else
            printf("curse the darkness\n");
    }

    return 0;
}
