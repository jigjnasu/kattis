/*
  Kattis.com
  Problem Karte.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 29/01/2017
 */

#include <iostream>
#include <string>

const std::string seq = "PKHT";

int main() {
    int deck[4][13] = {0};

    std::string line;
    std::getline(std::cin, line);

    for (std::size_t i = 0; i < line.size(); i += 3) {
        const int t = seq.find(line[i]);
        const int c = std::atoi(line.substr(i + 1, 2).c_str());
        if (deck[t][c - 1] == 0) {
            deck[t][c - 1] = 1;
        } else {
            std::cout << "GRESKA" << std::endl;
            return 0;
        }
    }

    for (int t = 0; t < 4; ++t) {
        int total = 0;
        for (int c = 0; c < 13; ++c)
            total += deck[t][c];
        std::cout << 13 - total << " ";
    }

    std::cout << std::endl;
    
    return 0;
}
