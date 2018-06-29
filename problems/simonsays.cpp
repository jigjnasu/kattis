/*
  Kattis.com
  Problem Simon Says.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 11/04/2017
*/

#include <iostream>
#include <string>
#include <map>

const std::string simon = "Simon says";

int main() {
    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    while (n--) {
        std::string line;
        std::getline(std::cin, line);

        if (line.size() > simon.size() && line.substr(0, simon.size()) == simon)
            std::cout << line.substr(simon.size() + 1, line.size()) << std::endl;
    }

    return 0;
}
