/*
  Kattis.com
  Problem inflation.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 20/12/2018
*/


#include <bits/stdc++.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    std::vector<int> b;
    while (n--) {
        int g = 0;
        scanf("%d", &g);
        b.push_back(g);
    }

    std::sort(b.begin(), b.end());

    bool explode = false;
    double r = 100.0f;
    for (std::size_t i = 0; i < b.size(); ++i) {
        if (b[i] > i + 1) {
            explode = true;
            break;
        }
        r = std::min(r, b[i] / static_cast<double>(i + 1));
    }

    if (!explode)
        printf("%lf\n", r);
    else
        printf("impossible\n");
    return 0;
}

