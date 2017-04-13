/*
Kattis.com
Problem Aaah.
Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
Date: 13/04/2017
*/

#include <iostream>
#include <string>

int main() {
    std::string a;
    std::string b;
    std::getline(std::cin, a);
    std::getline(std::cin, b);

    if (a.size() >= b.size())
        std::cout << "go" << std::endl;
    else
        std::cout << "no" << std::endl;

    return 0;
}
