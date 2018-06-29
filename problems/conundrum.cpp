/*
  Kattis.com
  Problem Cryptographer's Conundrum.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 06/04/2017
*/

#include <iostream>
#include <string>

const std::string key = "PER";

int main() {
    std::string cypher;
    std::getline(std::cin, cypher);

    std::size_t days = cypher.size();

    for (std::size_t i = 0; i < cypher.size(); ++i) {
        if (cypher[i] == key[i % key.size()])
            --days;
    }

    printf("%lu\n", days);

    return 0;
}
