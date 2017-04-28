/*
  Kattis.com
  Problem Kornislav
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 29/04/2017.
 */

#include <cstdio>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> sides;
    for (int i = 0; i < 4; ++i) {
        int side = 0;
        scanf("%d", &side);
        sides.push_back(side);
    }

    std::sort(sides.begin(), sides.end());

    printf("%d\n", sides[0] * sides[2]);

    return 0;
}
