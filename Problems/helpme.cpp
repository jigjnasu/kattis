/*
  Kattis.com
  Problem Help Me With The Game.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 03/08/2017
*/

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

const std::string white_pos = "KQRBNP";
const std::string black_pos = "kqrbnp";

int main() {
    std::vector<std::string> chess;
    for (std::size_t i = 0; i < 17; ++i) {
        std::string row;
        std::getline(std::cin, row);
        if (i % 2)
            chess.push_back(row);
    }

    std::vector<std::string> white(6, "");
    std::vector<std::string> black(6, "");

    for (int r = chess.size() - 1; r >= 0; --r) {
        for (std::size_t c = 2; c < chess[r].size(); c += 4) {
            if (chess[r][c] >= 'A' && chess[r][c] <= 'Z') {
                std::string pos;
                if (chess[r][c] != 'P')
                    pos.push_back(chess[r][c]);
                pos.push_back(static_cast<char>((((c - 2) / 4)) + 'a'));
                pos.push_back(static_cast<char>((8 - r) + '0'));
                white[white_pos.find(chess[r][c])] += pos + ",";
            }
        }
    }

    for (std::size_t r = 0; r < chess.size(); ++r) {
        for (std::size_t c = 2; c < chess[r].size(); c += 4) {
            if (chess[r][c] >= 'a' && chess[r][c] <= 'z') {
                std::string pos;
                if (chess[r][c] != 'p')
                    pos.push_back(chess[r][c] - 'a' + 'A');
                pos.push_back(static_cast<char>((((c - 2) / 4)) + 'a'));
                pos.push_back(static_cast<char>(8 - r + '0'));
                black[black_pos.find(chess[r][c])] += pos + ",";
            }
        }
    }

    // White peices
    std::string output = "White: ";
    for (int i = 0; i < 6; ++i)
        output += white[i];
    std::cout << output.substr(0, output.size() - 1) << std::endl;

    // Black peices
    output = "Black: ";
    for (int i = 0; i < 6; ++i)
        output += black[i];
    std::cout << output.substr(0, output.size() - 1) << std::endl;    
    
    return 0;
}
