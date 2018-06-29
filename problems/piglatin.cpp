/*
  Kattis.com
  Problem Pig Latin.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 17/06/2017
*/

#include <iostream>
#include <sstream>
#include <string>

inline bool vowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' ||
        c == 'o' || c == 'u' || c == 'y')
        return true;
    else
        return false;
}

int main() {
    std::string line;
    while (std::getline(std::cin, line)) {
        std::istringstream iss(line);

        while (iss) {
            std::string word;
            iss >> word;
            if (word.size() == 0)
                break;

            if (vowel(word[0])) {
                std::cout << word << "yay ";
            } else {
                for (int i = 0; i < word.size(); ++i) {
                    if (vowel(word[i])) {
                        std::cout << word.substr(i, word.size() - i) << word.substr(0, i) << "ay ";
                        break;
                    }
                }
            }
        }
        
        std::cout << std::endl;
    }

    return 0;
}
