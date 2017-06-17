/*
  Kattis.com
  Problem Shopaholic.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 27/04/2017
*/

#include <cstdio>
#include <vector>
#include <algorithm>

int main() {
    int n = 0;
    scanf("%d", &n);

    std::vector<int> costs;
    for (int i = 0; i < n; ++i) {
        int cost = 0;
        scanf("%d", &cost);
        costs.push_back(cost);
    }

    std::sort(costs.begin(), costs.end());

    int i = n % 3;
    double discount = 0;
    while (i < n) {
        discount += costs[i];
        i += 3;
    }

    printf("%.0lf\n", discount);

    return 0;
}
