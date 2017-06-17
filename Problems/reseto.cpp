/*
  Kattis.com
  Problem Reseto.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 16/06/2017
*/

#include <cstdio>
#include <vector>

int main() {
    int n = 0;
    int k = 0;
    scanf("%d %d", &n, &k);

    std::vector<int> p;
    for (int i = 0; i <= n; ++i)
        p.push_back(i);

    int counter = 0;
    for (int i = 2; i <= n; ++i) {
        if (p[i] == i) {
            ++counter;
            p[i] = 0;
            if (counter == k) {
                printf("%d\n", i);
                return 0;
            }

            for (int j = i * 2; j <= n; j += i) {
                if (p[j] != 0)
                    ++counter;
                if (counter == k) {
                    printf("%d\n", j);
                    return 0;
                }
                p[j] = 0;
            }
        }
    }

    return 0;
}
