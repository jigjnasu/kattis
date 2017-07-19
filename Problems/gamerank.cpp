/*
  Kattis.com
  Problem Game Rank.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  19/07/2017
*/

#include <iostream>
#include <string>
#include <vector>

const std::vector<int> table = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2};

int main() {
    std::string line;
    std::getline(std::cin, line);

    int stars = 0;
    int wins = 0;
    int rank = 25;
    for (std::size_t i = 0; i < line.size(); ++i) {
        if (rank == 0)
            break;
        if (line[i] == 'W') {
            ++wins;
            ++stars;

            if (wins >= 3 && rank >= 6)
                ++stars;

            if (stars > table[rank - 1]) {
                stars -= table[rank - 1];
                --rank;
            }
        } else {
            if (rank < 20) {
                if (stars) {
                    --stars;
                } else {
                    ++rank;
                    stars = table[rank - 1] - 1;
                }
            } else if (rank == 20 && stars) {
                --stars;
            }
            wins = 0;
        }
    }

    if (rank)
        std::cout << rank << std::endl;
    else
        std::cout << "Legend" << std::endl;

    return 0;
}
