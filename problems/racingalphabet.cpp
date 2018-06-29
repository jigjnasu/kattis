/*
  Kattis.com
  Problem Racing Around the Alphabet.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 04/11/2017
*/

#include <iostream>
#include <string>
#include <cmath>

inline int max(int a, int b) {
    return a > b ? a : b;
}

inline int min(int a, int b) {
    return a < b ? a : b;
}

inline int value(char c) {
    if (c == 32)
        return 26;
    else if (c == 39)
        return 27;
    else
        return c - 'A';
}

int main() {
    const double total = M_PI * 60;
    const double one_step = total / 28;

    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    while (n--) {
        std::string word;
        std::getline(std::cin, word);

        int distance = 0;
        int last = value(word[0]);
        for (std::size_t i = 1; i < word.size(); ++i) {
            int curr = value(word[i]);
            if (curr != last) {
                const int a = std::abs(last - curr);
                const int b = 27 - max(last, curr) + min(last, curr) + 1;
                distance += min(a, b);
            }
            last = curr;
        }

        const double timing = ((distance * one_step) / 15.0f)  + word.size();

        printf("%.12lf\n", timing);
    }

    return 0;
}
