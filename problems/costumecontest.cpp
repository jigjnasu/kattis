/*
  Kattis.com
  Problem costume contest.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 20/12/2018
*/

#include <bits/stdc++.h>

int main() {
    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    std::unordered_map<std::string, int> dict;
    int m = n;
    while (n--) {
        std::string c;
        std::getline(std::cin, c);
        ++dict[c];
    }

    for (auto it = dict.begin(); it != dict.end(); ++it)
        m = std::min(m, it->second);

    std::vector<std::string> r;
    for (auto it = dict.begin(); it != dict.end(); ++it)
        if (it->second == m)
            r.push_back(it->first);

    std::sort(r.begin(), r.end());
    for (std::size_t i = 0; i < r.size(); ++i)
        printf("%s\n", r[i].c_str());

    return 0;
}


