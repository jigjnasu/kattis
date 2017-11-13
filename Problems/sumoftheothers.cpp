/*
  Kattis.com
  Problem Sum of the Others.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 14/11/2017
*/

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {
    std::string line;
    std::vector<int> numbers;

    while (std::getline(std::cin, line)) {
        std::istringstream iss(line);

        int total = 0;
        int n = 0;
        while (iss >> n) {
            numbers.push_back(n);
            total += n;
        }

        for (std::size_t i = 0; i < numbers.size(); ++i) {
            if (total - numbers[i] == numbers[i]) {
                std::cout << numbers[i] << std::endl;
                break;
            }
        }
    }

    return 0;
}
