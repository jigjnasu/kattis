/*
  Kattis.com
  Problem A Different Problem.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 15/04/2017
*/

#include <iostream>
#include <string>
#include <cmath>

int main() {
    std::string line;
    while (std::getline(std::cin, line)) {
        const std::size_t pos = line.find(" ");
        double a = std::atof(line.substr(0, pos).c_str());
        double b = std::atof(line.substr(pos + 1, line.size()).c_str());

        printf("%.0lf\n", std::abs(a - b));
    }

    return 0;
}
