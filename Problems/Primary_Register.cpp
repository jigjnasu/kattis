/*
  Kattis.com
  Problem Primary Register.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 02/05/2017
 */

#include <cstdio>
#include <vector>

const std::vector<int> R = {2, 3, 5, 7, 11, 13, 17, 19};

int main() {
    int t = 0;
    int r = 1;

    for (std::size_t i = 0; i < R.size(); ++i) {
        int x = 0;
        scanf("%d", &x);

        t += x * r;
        r *= R[i];
    }

    printf("%d\n", r - t - 1);

    return 0;
}
