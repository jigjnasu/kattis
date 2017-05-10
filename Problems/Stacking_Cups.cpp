/*
  Kattis.com
  Problem Stacking Cups.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 07/04/2017
*/

#include <iostream>
#include <string>
#include <map>

int main() {
    int n = 0;
    std::map<int, std::string> list;

    std::cin >> n;
    std::cin.ignore();

    while (n--) {
        std::string line;
        std::getline(std::cin, line);

        // Error case
        const std::size_t pos = line.find(" ");
        if (line[0] >= '0' && line[0] <= '9')
            list[std::atoi(line.substr(0, pos).c_str()) / 2] = line.substr(pos + 1, line.size());
        else
            list[std::atoi(line.substr(pos + 1, line.size()).c_str())] = line.substr(0, pos);
    }

    for (std::map<int, std::string>::const_iterator it = list.begin();
         it != list.end(); ++it)
        std::cout << it->second << std::endl;

    return 0;
}
