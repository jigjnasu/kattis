/*
  Kattis.com
  Problem Simon Says.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 15/04/2017
*/

#include <iostream>
#include <string>
#include <cmath>

int main() {
    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    while (n--) {
        std::string message;
        std::getline(std::cin, message);

        const int size = std::sqrt(message.size());
        for (int i = size - 1; i >= 0; --i) {
            for (int j = 0; j < size; ++j) {
                std::cout << message[i + j * size];
            }
        }

        std::cout << std::endl;
    }

    return 0;
}
