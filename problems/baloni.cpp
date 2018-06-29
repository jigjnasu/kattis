/*
  Kattis.com
  Problem Baloni.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 20/07/2017
*/

#include <cstdio>
#include <vector>

bool found(std::vector<int>& heights, int h) {
    for (std::size_t i = 0; i < heights.size(); ++i) {
        if (heights[i] == h) {
            --heights[i];
            return true;
        }
    }

    return false;
}

int main() {
    int n = 0;
    scanf("%d", &n);

    std::vector<int> heights;
    int arrow = 0;
    while (n--) {
        int h = 0;
        scanf("%d", &h);

        if (!found(heights, h)) {
            heights.push_back(h - 1);
            ++arrow;
        }
    }

    printf("%d\n", arrow);

    return 0;
}
