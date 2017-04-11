/*
Kattis.com
Problem Quick Brown Fox.
Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
Date: 11/04/2017
*/

#include <iostream>
#include <string>

// will have a, b, c, d ..... x, y, z.
// Index will have 2^0 + 2^1 + ... + 2^25
// This value is pre calculated one.
const int panagram_digit = 67108863;

int index(char c) {
    int i = -1;
    if (c >= 'a' && c <= 'z')
        i = c - 'a';
    else if (c >= 'A' && c <= 'Z')
        i = c - 'A';

    return i;
}

std::string missing(int total) {
    std::string miss;
    for (int i = 0; i < 26; ++i)
        if ((total & 1 << i) == 0)
            miss += 'a' + i;

    return miss;
}

int main() {
    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    while (n--) {
        std::string line;
        std::getline(std::cin, line);

        int total = 0;
        for (std::size_t i = 0; i < line.size(); ++i) {
            const int pos = index(line[i]);

            if (pos >= 0 && (total & 1 << pos) == 0)
                total += 1 << pos;
        }

        if (panagram_digit == total)
            std::cout << "pangram" << std::endl;
        else
            std::cout << "missing " << missing(total) << std::endl;
    }
    
    return 0;
}
