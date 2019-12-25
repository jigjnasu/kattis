/*
  Kattis.com
  Problem Hot hike
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 25/12/2019.
*/

#include <bits/stdc++.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    std::vector<int> temp;
    while (n--) {
        int t = 0;
        scanf("%d", &t);
        temp.push_back(t);
    }

    int d = 0;
    int t = 0;
    int m = 41;
    for (int i = 0; i < temp.size() - 2; ++i) {
        const int a = std::max(temp[i], temp[i + 2]);
        if (a < m) {
            d = i + 1;
            t = a;
            m = a;
        }
    }

    printf("%d %d\n", d, t);

    return 0;
}
