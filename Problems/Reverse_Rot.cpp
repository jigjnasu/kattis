/*
Kattis.com
Problem Reverse Rot.
Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
Date: 11/04/2017
*/

#include <iostream>
#include <string>

const std::string key = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";

void swap(char& a, char& b) {
    const char t = a;
    a = b;
    b = t;
}

void reverse(std::string& line) {
    int i = 0;
    int j = line.size() - 1;

    while (i < j)
        swap(line[i++], line[j--]);
}

int main() {
    while (1) {
        int n = 0;
        std::cin >> n;
        std::cin.ignore();

        if (n == 0)
            break;

        std::string line;
        std::getline(std::cin, line);

        reverse(line);

        for (std::size_t i = 0; i < line.size(); ++i)
            line[i] = key[(key.find(line[i]) + n) % key.size()];

        std::cout << line << std::endl;
    }

    return 0;
}
