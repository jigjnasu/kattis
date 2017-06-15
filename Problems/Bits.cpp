/*
  Kattis.com
  Problem Bits.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 15/06/2017
*/

#include <iostream>
#include <string>

int ones(int n) {
    int result = 0;
    while (n) {
        if (n % 2)
            ++result;
        n /= 2;
    }

    return result;
}

int main() {
    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    while (n--) {
        std::string number;
        std::getline(std::cin, number);
        int max = 0;
        for (int i = 1; i <= number.size(); ++i) {
            const int m = ones(std::atoi(number.substr(0, i).c_str()));
            if (m > max)
                max = m;
        }

        std::cout << max << std::endl;
    }

    return 0;
}
