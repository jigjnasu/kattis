/*
  Kattis.com
  Problem Bijele.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 2nd, 2017
 */

#include <cstdio>
#include <vector>

const std::vector<int> sets = {1, 1, 2 , 2, 2, 8};

int main() {
    for (int i = 0; i < 6; ++i) {
        int peices = 0;
        scanf("%d", &peices);

        printf("%d ", sets[i] - peices);
    }

    printf("\n");
    
    return 0;
}
