/*
  Kattis.com
  Avion
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 31/12/2019
 */

#include <bits/stdc++.h>

int main() {
    std::vector<int> result;
    for (int i = 0; i < 5; ++i) {
        std::string line;
        std::getline(std::cin, line);
        const std::size_t pos = line.find("FBI");
        if (pos != std::string::npos)
            result.push_back(i + 1);
    }

    if (result.empty()) {
        printf("HE GOT AWAY!\n");
    } else {
        for (int i : result)
            printf("%d ", i);
        printf("\n");
    }

    return 0;
}
