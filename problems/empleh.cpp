/*
  Kattis.com
  Problem Emag Eht Htiw Em Pleh.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 03/08/2017
*/

#include <iostream>
#include <sstream>
#include <vector>

void print(const std::vector<std::string>& chess) {
    for (int i = chess.size() - 1; i >= 0; --i)
        std::cout << chess[i] << std::endl;
}

void put_peice(const std::string& pos,
               std::vector<std::string>& chess,
               bool white) {
    // It is a Pawn
    char type = ' ';
    int r = 0;
    int c = 0;
    if (pos.size() == 2) {
        type = 'P';
        r = 2 * (pos[1] - '1') + 1;
        c = 4 * (pos[0] - 'a') + 2;
    } else {
        type = pos[0];
        r = 2 * (pos[2] - '1') + 1;
        c = 4 * (pos[1] - 'a') + 2;            
    }

#if 0
    std::cout << "pos == " << pos << " || r == " << r << " || c == " << c << " || " << type << std::endl;
#endif
    
    chess[r][c] = white ? type : type - 'A' + 'a';
}

int main() {
    std::vector<std::string> chess;
    chess.push_back("+---+---+---+---+---+---+---+---+");
    for (int i = 0; i < 8; ++i) {
        if (i % 2)
            chess.push_back("|...|:::|...|:::|...|:::|...|:::|");
        else
            chess.push_back("|:::|...|:::|...|:::|...|:::|...|");
        chess.push_back("+---+---+---+---+---+---+---+---+");
    }

    std::string white;
    std::getline(std::cin, white);
    std::istringstream iss_w(white.substr(7, white.size() - 7));

    std::string pos;
    while (std::getline(iss_w, pos, ','))
        put_peice(pos, chess, true);

    std::string black;    
    std::getline(std::cin, black);
    std::istringstream iss_b(black.substr(7, black.size() - 7));

    while (std::getline(iss_b, pos, ','))
        put_peice(pos, chess, false);

    print(chess);
    
    return 0;
}
