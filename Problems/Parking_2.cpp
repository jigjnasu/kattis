/*
  Kattis.com
  Problem Parking.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 02/05/2017
*/

#include <cstdio>

int min(int a, int b) {
    return a < b ? a : b;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int parked(int x_s, int x_e,
           int y_s, int y_e,
           int z_s, int z_e, int t) {
    int count = 0;
    if (x_s < t && x_e >= t)
        ++count;
    if (y_s < t && y_e >= t)
        ++count;
    if (z_s < t && z_e >= t)
        ++count;

    return count;    
}

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);

    int x_s = 0;
    int x_e = 0;
    scanf("%d %d", &x_s, &x_e);

    int y_s = 0;
    int y_e = 0;
    scanf("%d %d", &y_s, &y_e);

    int z_s = 0;
    int z_e = 0;
    scanf("%d %d", &z_s, &z_e);

    const int start = min(min(x_s, y_s), z_s);
    const int end   = max(max(x_e, y_e), z_e);

    int parking = 0;
    for (int i = start + 1; i <= end; ++i) {
        const int count = parked(x_s, x_e, y_s, y_e, z_s, z_e, i);

        if (count == 3)
            parking += 3 * c;
        else if (count == 2)
            parking += 2 * b;
        else if (count == 1)
            parking += a;
    }

    printf("%d\n", parking);

    return 0;
}
