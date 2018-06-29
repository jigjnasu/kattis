/*
  Kattis.com
  Problem Patuljci.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 18/08/2017
*/

#include <cstdio>
#include <vector>

int main() {
    std::vector<int> hats;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        int n = 0;
        scanf("%d", &n);

        hats.push_back(n);
        sum += n;
    }

    for (std::size_t i = 0; i < hats.size() - 1; ++i) {
        for (std::size_t j = i + 1; j < hats.size(); ++j) {
            if (sum - hats[i] - hats[j] == 100)
                hats[i] = hats[j] = 0;
        }
    }

    for (std::size_t i = 0; i < hats.size(); ++i)
        if (hats[i])
            printf("%d\n", hats[i]);

    return 0;
}
