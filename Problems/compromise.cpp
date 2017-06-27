/*
  Kattis.com
  Problem Best Compromise.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 27/06/2017
*/

#include <iostream>
#include <string>
#include <vector>

int main() {
    int t = 0;
    std::cin >> t;
    std::cin.ignore();

    while (t--) {
        int max = 0;
        int n = 0;
        int m = 0;
        std::cin >> n >> m;
        std::cin.ignore();

        max = n;
        std::vector<int> ones;
        for (int i = 0; i < m; ++i)
            ones.push_back(0);
        
        while (n--) {
            std::string line;
            std::getline(std::cin, line);
            for (std::size_t i = 0; i < line.size(); ++i)
                if (line[i] == '1')
                    ++ones[i];
        }

        for (std::size_t i = 0; i < ones.size(); ++i) {
            if (ones[i] > max / 2)
                std::cout << "1";
            else
                std::cout << "0";
        }
        std::cout << std::endl;
    }

    return 0;
}


