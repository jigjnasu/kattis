/*
  Kattis.com
  Problem Ragged Right.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 06/06/2017
*/

#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string line;
    std::vector<int> length;
    std::size_t max = 0;

    while (std::getline(std::cin, line)) {
        if (line.size() > max)
            max = line.size();
        length.push_back(line.size());
    }

    std::size_t ragged = 0;
    for (std::size_t i = 0; i < length.size() - 1; ++i) {
        if (length[i] != max)
            ragged += (max - length[i]) * (max - length[i]);
    }

    std::cout << ragged << std::endl;

    return 0;
}
