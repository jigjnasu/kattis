/*
  Kattis.com
  Problem Symmetric Order.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 3rd, 2017
 */

#include <iostream>
#include <string>
#include <vector>

int main() {
    int i = 1;
    while (1) {
        int n = 0;
        std::cin >> n;
        std::cin.ignore();
        if (n == 0)
            break;

        std::vector<std::string> list;
        while (n--) {
            std::string line;
            std::getline(std::cin, line);
            list.push_back(line);
        }

        std::size_t limit = list.size() >> 1;
        if (list.size() % 2 == 0)
            --limit;

        std::cout << "SET " << i++ << std::endl;
        for (std::size_t i = 0; i < list.size(); i += 2)
            std::cout << list[i] << std::endl;

        int i = list.size() - 1;
        if (list.size() % 2)
            --i;
            
        for (; i >= 1; i -= 2)
            std::cout << list[i] << std::endl;
    }
    
    return 0;
}
