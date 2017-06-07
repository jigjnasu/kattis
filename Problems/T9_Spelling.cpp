/*
  Kattis.com
  Problem T9 Spelling
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 07/06/2017.
*/

#include <iostream>
#include <string>
#include <map>

const char space = ' ';

struct key {
    key() : code(0), freq(0) {}
    key(int c, int f) : code(c), freq(f) {}

    key(const key& rhs) {
        code = rhs.code;
        freq = rhs.freq;
    }

    key& operator = (const key& rhs) {
        code = rhs.code;
        freq = rhs.freq;
        return *this;
    }

    int code;
    int freq;
};

void print(const key& k) {
    for (int i = 0; i < k.freq; ++i)
        std::cout << k.code;
}

int main() {
    std::map<char, key> dictionary = { { 'a', key(2, 1) },
                                       { 'b', key(2, 2) },
                                       { 'c', key(2, 3) },
                                       { 'd', key(3, 1) },
                                       { 'e', key(3, 2) },
                                       { 'f', key(3, 3) },
                                       { 'g', key(4, 1) },
                                       { 'h', key(4, 2) },
                                       { 'i', key(4, 3) },
                                       { 'j', key(5, 1) },
                                       { 'k', key(5, 2) },
                                       { 'l', key(5, 3) },
                                       { 'm', key(6, 1) },
                                       { 'n', key(6, 2) },
                                       { 'o', key(6, 3) },
                                       { 'p', key(7, 1) },
                                       { 'q', key(7, 2) },
                                       { 'r', key(7, 3) },
                                       { 's', key(7, 4) },
                                       { 't', key(8, 1) },
                                       { 'u', key(8, 2) },
                                       { 'v', key(8, 3) },
                                       { 'w', key(9, 1) },
                                       { 'x', key(9, 2) },
                                       { 'y', key(9, 3) },
                                       { 'z', key(9, 4) } };

    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    for (int i = 0; i < n; ++i) {
        std::string line;
        std::getline(std::cin, line);

        std::cout << "Case #" << i + 1 << ": ";
        if (line[0] == space)
            std::cout << "0";
        else
            print(dictionary[line[0]]);

        for (std::size_t j = 1; j < line.size(); ++j) {
            if (line[j] == space) {
                if (line[j - 1] == space)
                    std::cout << " ";
                std::cout << "0";
            } else {
                if (dictionary[line[j - 1]].code == dictionary[line[j]].code)
                    std::cout << " ";
                print(dictionary[line[j]]);
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
