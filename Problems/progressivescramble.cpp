/*
  Kattis.com
  Problem Progressive Scramble
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 21/11/2017
 */

#include <iostream>
#include <string>
#include <vector>

inline int v(char c) {
    if (c == ' ')
        return 0;
    else
        return c - 'a' + 1;
}

inline char u(int value) {
    if (value == 0)
        return ' ';
    else
        return 'a' + value - 1;
}

std::string encrypt(const std::string& message) {
    std::vector<int> temp;
    temp.push_back(v(message[0]));
    for (std::size_t i = 1; i < message.size(); ++i)
        temp.push_back(temp[i - 1] + v(message[i]));

    std::string msg;
    for (std::size_t i = 0; i < temp.size(); ++i)
        msg.push_back(u(temp[i] % 27));
    return msg;
}

std::string decrypt(const std::string& message) {
    std::string msg;
    msg.push_back(message[0]);
    for (std::size_t i = 1; i < message.size(); ++i) {
        const int a = v(message[i]);
        const int b = v(message[i - 1]);
        if (a - b < 0)
            msg.push_back(u(27 + a - b));
        else
            msg.push_back(u(a - b));
    }

    return msg;
}

int main() {
    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    while (n --) {
        std::string message;
        std::getline(std::cin, message);

        if (message[0] == 'e')
            std::cout << encrypt(message.substr(2, message.size() - 2)) << std::endl;
        else
            std::cout << decrypt(message.substr(2, message.size() - 2)) << std::endl;
    }

    return 0;
}
