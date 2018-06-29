/*
  Kattis.com
  Problem Planting Trees.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 20/04/2017
*/

#include <cstdio>
#include <vector>
#include <algorithm>

int main() {
    int n = 0;
    scanf("%d", &n);

    std::vector<int> trees;
    while (n--) {
        int days = 0;
        scanf("%d", &days);

        trees.push_back(days);
    }

    std::sort(trees.begin(), trees.end());

    int party_day = 0;
    for (int i = trees.size() - 1; i >= 0; --i) {
        if (trees.size() - i + trees[i] > party_day)
            party_day = trees.size() - i + trees[i];
    }

    printf("%d\n", party_day + 1);

    return 0;
}
