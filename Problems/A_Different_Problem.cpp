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
    while (1) {
        std::string line;
        std::getline(std::cin, line);
        
        if (line.size() == 0)
            break;
        
        const std::size_t pos = line.find(" ");
        double a = std::atof(line.substr(0, pos).c_str());
        double b = std::atof(line.substr(pos + 1, line.size()).c_str());

        printf("%.0lf\n", std::abs(a - b));
    }
    
    return 0;
}
