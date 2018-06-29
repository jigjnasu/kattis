/*
  Kattis.com
  Problem Skener.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 05/05/2017
 */

#include <iostream>
#include <string>
#include <vector>

std::string new_line(const std::string& line, int zC) {
    std::string n;
    for (std::size_t i = 0; i < line.size(); ++i)
        for (int j = 0; j < zC; ++j)
            n+= line[i];

    return n;
}

void print(const std::string& line, int zR) {
    for (int i = 0; i < zR; ++i)
        std::cout << line << std::endl;
}

int main() {
    int R  = 0;
    int C  = 0;
    int zR = 0;
    int zC = 0;
    std::cin >> R >> C >> zR >> zC;
    std::cin.ignore();

    std::vector<std::string> lines;
    for (int i = 0; i < R; ++i) {
        std::string line;
        std::getline(std::cin, line);
        lines.push_back(line);
    }

    for (std::size_t i = 0; i < lines.size(); ++i) {
        if (zC > 1)
            print(new_line(lines[i], zC), zR);
        else
            print(lines[i], zR);
    }
        

    return 0;
}
