/*
  Kattis.com
  Stuck In A Time Loop
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 2nd, 2017
 */

#include <cstdio>

int main() {
    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
        printf("%d Abracadabra\n", i + 1);

    return 0;
}
