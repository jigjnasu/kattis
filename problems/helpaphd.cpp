/*
  Kattis.com
  Problem Help a PhD candidate out!.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 24/11/2017
 */

#include <iostream>
#include <string>
#include <sstream>

int main() {
    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    while (n --) {
        std::string line;
        std::getline(std::cin, line);

        std::istringstream iss(line);
        int a = 0;
        int b = 0;
        iss >> a >> b;

        if (line.find("+") != std::string::npos)
            std::cout << a + b << std::endl;
        else
            std::cout << "skipped" << std::endl;
    }

    return 0;
}

