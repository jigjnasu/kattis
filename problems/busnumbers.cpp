/*
  Kattis.com
  Problem Bus Numbers.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 08/05/2017
*/

#include <cstdio>
#include <vector>
#include <algorithm>

int main() {
    int n = 0;
    scanf("%d", &n);

    std::vector<int> routes;
    while (n--) {
        int bus = 0;
        scanf("%d", &bus);
        routes.push_back(bus);
    }

    std::sort(routes.begin(), routes.end());

    bool start = false;
    std::size_t i = 0;
    while (i < routes.size() - 1) {
        if (routes[i] + 2 == routes[i + 2]) {
            printf("%d-", routes[i]);
            std::size_t j = i + 2;
            while (routes[j] + 1 == routes[j + 1])
                ++j;
            printf("%d ", routes[j]);
            i = j + 1;
        } else {
            printf("%d ", routes[i]);
            ++i;
        }
    }

    if (i < routes.size())
        printf("%d\n", routes[routes.size() - 1]);
    else
        printf("\n");

    return 0;
}

