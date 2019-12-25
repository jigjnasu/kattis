/*
  Kattis.com
  Problem Lost lineup
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 25/12/2019.
*/

#include <bits/stdc++.h>

using T = std::tuple<int, int>;

void lost_lineup(const std::vector<int>& v) {
    std::vector<T> p;
    for (std::size_t i = 0; i < v.size(); ++i)
        p.push_back(std::make_tuple(v[i], i + 2));

    std::sort(p.begin(), p.end(), [] (T a, T b) {
                                      return std::get<0>(a) < std::get<0>(b);
                                  });

    printf("1 ");
    for (const T& v : p)
        printf("%d ", std::get<1>(v));
    printf("\n");
}

int main() {
    int n = 0;
    scanf("%d\n", &n);

    --n;
    std::vector<int> v;
    while (n--) {
        int p = 0;
        scanf("%d", &p);
        v.push_back(p);
    }

    lost_lineup(v);
    return 0;
}
