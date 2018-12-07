/*
  Kattis.com
  Problem exam.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 08/12/2018
*/

#include <bits/stdc++.h>

int main() {
    int k = 0;
    scanf("%d", &k);
    std::cin.ignore();

    std::string y;
    std::string f;
    std::getline(std::cin, y);
    std::getline(std::cin, f);

    int m = 0;
    int u = 0;
    for (std::size_t i = 0; i < y.size(); ++i)
        if (y[i] == f[i])
            ++m;
        else
            ++u;

    const int p = y.size() - k;
    printf("%d\n", std::min(k, m) +  std::min(p, u));

    return 0;
}
