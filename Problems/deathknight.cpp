/*
  Kattis.com
  Problem Death Knight Hero.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 27/09/2017
*/

#include <iostream>
#include <string>

int main() {
    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    int won = n;
    while (n--) {
        std::string line;
        std::getline(std::cin, line);
        if (line.find("CD") != std::string::npos)
            --won;
    }

    std::cout << won << std::endl;

    return 0;
}

