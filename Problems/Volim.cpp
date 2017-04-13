/*
Kattis.com
Problem Volim.
Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
Date: 13/04/2017
*/

#include <iostream>

int main() {
    int player = 0;
    int total = 0;
    std::cin >> player;
    std::cin.ignore();

    int questions = 0;
    std::cin >> questions;
    std::cin.ignore();

    while (questions--) {
        std::string line;
        std::getline(std::cin, line);

        total += atoi(line.substr(0, line.size() -1).c_str());
        
        if (total >= 210)
            continue;

        if (line[line.size() - 1] == 'T')
            ++player;
        if (player > 8)
            player = 1;
    }

    std::cout << player << std::endl;

    return 0;
}
