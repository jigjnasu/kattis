/*
  Kattis.com
  Problem Beehives.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 15/04/2017
 */

#include <cstdio>
#include <vector>
#include <cmath>

// For sweet beehive we will have type = 1;
// For sour beehive we will have type = 0;
struct beehive {
    beehive() : x(0), y(0), type('1') {}
    beehive(float _x, float _y) : x(_x), y(_y), type('1') {}

    float x;
    float y;
    char type;
};

int main() {
    while (1) {
        float d = 0.0f;
        int n = 0;
        std::vector<beehive> hives;
        scanf("%f %d", &d, &n);

        if (d == 0.0f && n == 0)
            break;

        for (int i = 0; i < n; ++i) {
            float x = 0;
            float y = 0;
            scanf("%f %f", &x, &y);

            hives.push_back(beehive(x, y));
        }

        int sweet = n;

        for (std::size_t i = 0; i < hives.size() - 1; ++i) {
            for (std::size_t j = i + 1; j < hives.size(); ++j) {
                const float a = std::abs(hives[i].x - hives[j].x);
                const float b = std::abs(hives[i].y - hives[j].y);
                if (std::sqrt(a * a + b * b) <= d) {
                    if (hives[i].type == '1')
                        --sweet;
                    if (hives[j].type == '1')
                        --sweet;
                    hives[i].type = hives[j].type = '0';
                }
            }
        }

        printf("%d sour, %d sweet\n", n - sweet, sweet);
    }

    return 0;
}
