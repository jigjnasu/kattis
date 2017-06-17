/*
  Kattis.com
  Problem Bela.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 2nd, 2017
 */

#include <iostream>
#include <string>
#include <vector>

const std::string cards = "AKQJT987";
const std::vector<int> values_d = {11, 4, 3, 20, 10, 14, 0, 0};
const std::vector<int> values_n = {11, 4, 3, 2 , 10,  0, 0, 0};

int main() {
    int n = 0;
    char cc;

    std::cin >> n;
    std::cin >> cc;

    std::cin.ignore();

    int total = 0;
    for (int i = 0; i < 4 * n; ++i) {
        std::string line;
        std::getline(std::cin, line);

        if (cc == line[1])
            total += values_d[cards.find(line[0])];
        else
            total += values_n[cards.find(line[0])];
    }

    printf("%d\n", total);

    return 0;
}
