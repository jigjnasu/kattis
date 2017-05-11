/*
  Kattis.com
  Problem Beavergnaw.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 05/05/2017
*/

#include <cstdio>
#include <cmath>

int main() {
    while (1) {
        int D = 0;
        int V = 0;
        scanf("%d %d", &D, &V);

        if (D == 0 && V == 0)
            break;
        
        printf("%.9lf\n", std::pow(D * D * D - 6 * (V / M_PI), 1.0 / 3));
    }
        
    return 0;
}
