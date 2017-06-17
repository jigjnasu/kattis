/*
  Kattis.com
  Problem Kemija.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 3rd, 2017
 */

#include <iostream>
#include <string>

bool is_vowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    else
        return false;
}

int main() {
    std::string line;
    std::getline(std::cin, line);

    std::size_t i = 0;
    while (i < line.size()) {
        std::cout << line[i];
        if (is_vowel(line[i]))
            if (i + 2 < line.size() && line[i] == line[i + 2] && line[i + 1] == 'p')
                i += 2;
        ++i;
    }

    std::cout << std::endl;
    
    return 0;
}
