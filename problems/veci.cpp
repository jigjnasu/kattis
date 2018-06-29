/*
  Kattis.com
  Problem Veci.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 05/07/2017.
 */

#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string n;
    std::getline(std::cin, n);

    for (int i = n.size() - 1; i >= 0; --i) {
        for (int j = i - 1; j >= 0; --j) {
            if (n[i] > n[j]) {
                const char c = n[i];
                n[i] = n[j];
                n[j] = c;
                std::sort(n.begin() + j + 1, n.end());
                std::cout << n << std::endl;
                return 0;
            }
        }
    }

    std::cout << "0" << std::endl;
    return 0;
}
