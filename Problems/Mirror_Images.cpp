/*
  Kattis.com
  Problem Mirror Images.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 07/04/2017
*/

#include <iostream>
#include <string>
#include <vector>

int main() {
    int t = 0;
    std::vector< std::vector<std::string> > mirror;
    std::cin >> t;
    std::cin.ignore();

    for (int i = 1; i <= t; ++i) {
        int r = 0;
        int c = 0;
        std::vector<std::string> images;
        
        std::cin >> r;
        std::cin >> c;
        std::cin.ignore();

        for (int j = 1; j <= r; ++j) {
            std::string line;
            std::getline(std::cin, line);
            images.push_back(line);
        }
        mirror.push_back(images);
    }

    for (std::size_t i = 0; i < mirror.size(); ++i) {
        std::cout << "Test " << i + 1 << std::endl;
        for (int r = mirror[i].size() - 1; r >= 0; --r) {
            for (int c = mirror[i][r].size() - 1; c >= 0; --c)
                std::cout << mirror[i][r][c];
            std::cout << std::endl;
        }
    }
    
    return 0;
}
