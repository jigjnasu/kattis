/*
  Kattis.com
  Problem Darts.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 27/04/2017
 */

#include <cstdio>
#include <cmath>
#include <vector>

const std::vector<int> radius = {20, 40, 60, 80, 100, 120, 140, 160, 180, 200};

int main() {
    int t = 0;
    scanf("%d", &t);

    while (t--) {
        int n = 0;
        scanf("%d", &n);

        int total = 0;
        while (n--) {
            int x = 0;
            int y = 0;
            scanf("%d %d", &x, &y);
            const double distance = std::sqrt(x * x + y * y);

            int score = 0;
            for (std::size_t i = 0; i < radius.size(); ++i) {
                if (distance <= static_cast<double>(radius[i])) {
                    score = radius.size() - i;
                    break;
                }
            }

            total += score;
        }

        printf("%d\n", total);
    }

    return 0;
}
