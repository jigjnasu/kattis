/*
  Kattis.com
  Problem Greedily Increasing Subsequence.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 07/12/2017
*/

#include <cstdio>
#include <vector>

int main() {
    int n = 0;
    scanf("%d", &n);

    std::vector<int> list;
    int last = -1;
    while (n--) {
        int a = 0;
        scanf("%d", &a);

        if (a > last) {
            list.push_back(a);
            last = a;
        }
    }

    printf("%lu\n", list.size());
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n");

    return 0;
}

