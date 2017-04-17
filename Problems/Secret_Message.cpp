/*
  Kattis.com
  Problem Server.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 14/04/2017
*/

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

int main() {
    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    while (n--) {
        std::string message;
        std::getline(std::cin, message);
        const int M = std::ceil(std::sqrt(message.size()));
        std::vector<std::string> pad;
 
        std::size_t i = 0;
        for (int r = 0; r < M; ++r) {
            std::string line;
            for (int c = 0; c < M; ++c)
                if (i < message.size())
                    line.push_back(message[i++]);
                else
                    line.push_back('*');
            pad.push_back(line);
        }

        for (std::size_t c = 0; c < pad.size(); ++c)
            for (int r = pad.size() - 1; r >= 0; --r)
                if (pad[r][c] != '*')
                    std::cout << pad[r][c];
        std::cout << std::endl;

    }
    return 0;
}
