/*
  Kattis.com
  Problem Solving for Carrots.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 3rd, 2017
 */

#include <iostream>
#include <string>

int main() {
    int c = 0;
    int p = 0;

    std::cin >> c;
    std::cin >> p;

    std::cin.ignore();

    while (c--) {
        std::string line;
        std::getline(std::cin, line);
    }

    std::cout << p << std::endl;

    return 0;
}
