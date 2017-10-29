/*
  Kattis.com
  Problem DRM Messages.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 29/10/2017
*/

#include <iostream>
#include <string>

int sum(const std::string& message) {
    int s = 0;
    for (std::size_t i = 0; i < message.size(); ++i)
        s += message[i] - 'A';
    return s;
}

void rotate(std::string& message, int s) {
    for (std::size_t i = 0; i < message.size(); ++i)
        message[i] = (message[i] + s) % 26 + 'A';
}

void merge(std::string& left, std::string& right) {
    for (std::size_t i = 0; i < left.size(); ++i)
        left[i] = (left[i] + right[i]) % 26 + 'A';
}

int main() {
    std::string message;
    std::getline(std::cin, message);

    const std::size_t size = message.size() >> 1;
    std::string left  = message.substr(0, size);
    std::string right = message.substr(size, size);

    rotate(left, sum(left));
    rotate(right, sum(right));

    merge(left, right);

    std::cout << left << std::endl;

    return 0;
}
