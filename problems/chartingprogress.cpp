/*
  Kattis.com
  Problem Charting Progress.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  19/07/2017
 */

#include <iostream>
#include <string>
#include <cstdio>

int main() {
    std::string line;
    int p = 0;
    int c = 0;
    while (std::getline(std::cin, line)) {
        if (line.empty()) {
            p = c = 0;
            std::cout << std::endl;
        } else {
            c = 0;
            for (std::size_t i = 0; i < line.size(); ++i)
                if (line[i] == '*')
                    ++c;

            int i = 0;
            while (i < (static_cast<int>(line.size()) - (p + c))) {
                std::cout << ".";
                ++i;
            }

            p += c;

            while (c--) {
                std::cout << "*";
                ++i;
            }

            while (i < static_cast<int>(line.size())) {
                std::cout << ".";
                ++i;
            }
            std::cout << std::endl;
        }
    }

    return 0;
}
