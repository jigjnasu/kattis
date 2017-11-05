/*
  Kattis.com
  Problem No Duplicates.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 05/11/2017
*/

#include <iostream>
#include <string>
#include <sstream>
#include <map>

int main() {
    std::string line;
    std::getline(std::cin, line);

    std::istringstream iss(line);
    std::string word;

    std::map<std::string, int> dict;
    while (iss >> word) {
        if (dict[word]) {
            std::cout << "no" << std::endl;
            return 0;
        } else {
            dict[word] = 1;
        }
    }

    std::cout << "yes" << std::endl;

    return 0;
}
