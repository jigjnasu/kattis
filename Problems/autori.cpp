/*
  Kattis.com
  Problem Autori.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 09/05/2017
*/

#include <iostream>
#include <string>

const int hyphen = 45;

int main() {
    std::string line;
    std::getline(std::cin, line);

    std::cout << line[0];
    std::size_t pos = line.find(hyphen);
    while (pos != std::string::npos) {
        std::cout << line[pos + 1];
        pos = line.find(hyphen, pos + 1);
    }

    std::cout << std::endl;

    return 0;
}
