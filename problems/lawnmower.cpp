/*
  Kattis.com
  Problem Lawn Mower.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 12/09/2017
*/

#include <cstdio>
#include <vector>
#include <algorithm>

bool mow(std::vector<double>& p, double w, double l) {
    std::sort(p.begin(), p.end());
    const double h = w / 2.0f;
    if ((p[0] - h) > 0.0f)
        return false;
    if ((p[p.size() - 1] + h) < l)
        return false;
    for (std::size_t i = 0; i < p.size() - 1; ++i)
        if (p[i] + h < p[i + 1] - h)
            return false;

    return true;
}

int main() {
    while (1) {
        int n = 0;
        int m = 0;
        double w = 0;
        scanf("%d %d %lf", &n, &m, &w);
        if (n == 0 && m == 0 && w == 0.0f)
            break;

        std::vector<double> x;
        while (n--) {
            double p = 0.0f;
            scanf("%lf", &p);
            x.push_back(p);
        }

        std::vector<double> y;
        while (m--) {
            double p = 0.0f;
            scanf("%lf", &p);
            y.push_back(p);
        }

        printf("%s\n", mow(x, w, 75.0f) && mow(y, w, 100.0f) ? "YES" : "NO");
    }

    return 0;
}

