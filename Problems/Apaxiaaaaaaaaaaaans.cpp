/*
  Kattis.com
  Problem Apaxiaaaaaaaaaaaans.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 2nd, 2017
 */

#include <iostream>
#include <string>

int main() {
    std::string name;
    std::getline(std::cin, name);

    std::size_t i = 0;
    while (i < name.size() - 1) {
        if (name[i] != name[i + 1])
            std::cout << name[i];
        ++i;
    }
    
    std::cout << name[i] << std::endl;

    return 0;
}
