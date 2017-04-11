/*
Kattis.com
Problem Oktalni.
Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
Date: 11/04/2017
*/

#include <iostream>
#include <string>

int to_decimal(const std::string& num) {
    int number = 0;
    for (int n = num.size() - 1; n >= 0; --n)
        if (num[n] == '1')
            number += (1 << num.size() - 1 - n);

    return number;
}

int main() {
    std::string n;
    std::getline(std::cin, n);

    std::size_t i = n.size() % 3;
    if (i)
        std::cout << to_decimal(n.substr(0, i));

    while (i < n.size()) {
        std::cout << to_decimal(n.substr(i, 3));
        i += 3;
    }
    
    std::cout << std::endl;
    
    return 0;
}
