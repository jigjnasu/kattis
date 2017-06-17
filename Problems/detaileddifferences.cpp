/*
  Kattis.com
  Problem Detailed Differences.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 08/04/2017
*/

#include <iostream>
#include <string>

int main() {
    int t = 0;
    std::cin >> t;
    std::cin.ignore();

    while(t--) {
        std::string line_a;
        std::getline(std::cin, line_a);
        std::string line_b;
        std::getline(std::cin, line_b);

        std::cout << line_a << std::endl;
        std::cout << line_b << std::endl;
        for (std::size_t i = 0; i < line_a.size(); ++i)
            if (line_a[i] == line_b[i])
                std::cout << ".";
            else
                std::cout << "*";
        
        std::cout << std::endl << std::endl;
    }

    return 0;
}
