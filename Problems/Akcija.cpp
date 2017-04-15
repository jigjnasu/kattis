/*
  Kattis.com
  Problem Akcija.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 15/04/2017
*/

#include <cstdio>
#include <vector>
#include <cstdlib>
#include <algorithm>

int main() {
    int n = 0;
    std::vector<int> books;
    scanf("%d", &n);

    int total = 0;
    while (n--) {
        int cost = 0;
        scanf("%d", &cost);
        books.push_back(cost);
        total += cost;
    }

    std::sort(books.begin(), books.end());

    for (int i = books.size() - 1 - 2; i >= 0; i -= 3)
        total -= books[i];

    printf("%d\n", total);

    return 0;
}
