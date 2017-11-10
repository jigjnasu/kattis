/*
  Kattis.com
  Problem Beekeeper.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 10/11/2017
*/

#include <iostream>
#include <string>

int count(const std::string& word) {
    int n = 0;
    std::size_t i = 0;
    while (i < word.size() - 1) {
        if (word[i] == 'a' ||
                        word[i] == 'e' ||
                        word[i] == 'i' ||
                        word[i] == 'o' ||
                        word[i] == 'u' ||
            word[i] == 'y') {
            if (word[i] == word[i + 1]) {
                ++n; ++i;
            }
        }
        ++i;
    }

    return n;
}

int main() {
    while(1) {
        int n = 0;
        std::cin >> n;
        std::cin.ignore();

        if (n == 0)
            break;

        int max = -1;
        std::string fav;
        while (n--) {
            std::string word;
            std::getline(std::cin, word);
            const int c = count(word);
            if (c > max) {
                max = c;
                fav = word;
            }
        }

        std::cout << fav << std::endl;
    }

    return 0;
}
