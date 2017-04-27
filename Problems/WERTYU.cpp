/*
  Kattis.com
  Problem WERTYU.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 27/04/2017
*/

#include <iostream>
#include <string>
#include <vector>

const char backslash = 0x5C;
const char space = ' ';
const char tab = 0x9;

const std::vector<std::string> keyboard = { {"`1234567890-="},
                                            {"QWERTYUIOP[]"},
                                            {"ASDFGHJKL;'"},
                                            { "ZXCVBNM,./"} };
int main() {
    std::string line;

    while (std::getline(std::cin, line)) {
        for (std::size_t i = 0; i < line.size(); ++i) {
            if (line[i] == space) {
                std::cout << " ";
            } else if (line[i] == tab) {
                std::cout << "\t";
            } else if (line[i] == backslash) {
                std::cout << "]";
            } else {
                for (std::size_t j = 0; j < keyboard.size(); ++j) {
                    const std::size_t pos = keyboard[j].find(line[i]);
                    if (pos != std::string::npos) {
                        std::cout << keyboard[j][pos - 1];
                        break;
                    }
                }
            }
        }

        std::cout << std::endl;
    }

    return 0;
}
