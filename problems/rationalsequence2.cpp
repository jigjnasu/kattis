/*
  Kattis.com
  Problem A Rational Sequence 2.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 05/05/2017
*/

#include <iostream>
#include <sstream>
#include <string>

int main() {
    int i = 0;
    std::cin >> i;
    std::cin.ignore();

    while (i--) {
        int k = 0;
        std::string line;
        std::string pos;
        std::getline(std::cin, line);
        std::istringstream iss(line);
        iss >> k >> pos;

        const std::size_t index = pos.find("/");
        int p = std::atoi(pos.substr(0, index).c_str());
        int q = std::atoi(pos.substr(index + 1, pos.size() - index).c_str());

        std::string path;
        while (p != 1 || q != 1) {
            if (p > q) {
                path += 'R';
                p -= q;
            } else {
                path += 'L';
                q -=p;
            }
        }

        int n = 0;
        for (int j = path.size() - 1; j >= 0; --j) {
            if (path[j] == 'R')
                n = 2 * (n + 1);
            else
                n = 2 * n + 1;
        }

        std::cout << k << " " << n + 1 << std::endl;
    }

    return 0;
}
