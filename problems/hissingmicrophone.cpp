/*
  Kattis.com
  Problem Hissing Microphone.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 14/11/2017
*/

#include <iostream>
#include <string>

int main() {
    std::string word;
    std::getline(std::cin, word);

    for (std::size_t i = 0; i < word.size() - 1; ++i) {
        if (word[i]     == 's' &&
            word[i + 1] == 's') {
            std::cout << "hiss" << std::endl;
            return 0;
        }
    }

    std::cout << "no hiss" << std::endl;

    return 0;
}
