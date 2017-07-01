/*
  Kattis.com
  Problem Cudoviste.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 01/07/2017
*/

#include <iostream>
#include <string>
#include <vector>

const char parked = 'X';
const char building = '#';

int main() {
    int r = 0;
    int c = 0;
    std::cin >> r >> c;
    std::cin.ignore();

    std::vector < std::string > parking;
    int squash[5] = {0};

    while (r--) {
        std::string line;
        std::getline(std::cin, line);
        parking.push_back(line);
    }

    for (std::size_t c = 0; c < parking[0].size() - 1; ++c) {
        for (std::size_t r = 0; r < parking.size() - 1; ++r) {
            int s = -1;
            if (parking[r][c] != building &&
                        parking[r][c + 1] != building &&
                        parking[r + 1][c] != building &&
                parking[r + 1][c + 1] != building) {
                s = 0;
                if (parking[r][c] == parked)
                    ++s;
                if (parking[r][c + 1] == parked)
                    ++s;
                if (parking[r + 1][c] == parked)
                    ++s;
                if (parking[r + 1][c + 1] == parked)
                    ++s;
            }
            if (s >= 0)
                ++squash[s];
        }
    }

    for (int i = 0; i < 5; ++i)
        std::cout << squash[i] << std::endl;

    return 0;
}

