/*
  Kattis.com
  Problem Nine Knights.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 05/11/2017
*/

#include <iostream>
#include <string>
#include <vector>

bool is_pos(int r, int c) {
    if ((r >= 0 && r <= 4) &&
        (c >= 0 && c <= 4))
        return true;
    else
        return false;
}

bool is_valid(const std::vector<std::string>& board, int r, int c) {
    // up move (left)
    int r_n = r - 2;
    int c_n = c - 1;
    if (is_pos(r_n, c_n) && board[r_n][c_n] == 'k')
        return false;

    // up move (right)
    c_n = c + 1;
    if (is_pos(r_n, c_n) && board[r_n][c_n] == 'k')
        return false;

    // down move (left)
    r_n = r + 2;
    c_n = c - 1;
    if (is_pos(r_n, c_n) && board[r_n][c_n] == 'k')
        return false;

    // down move (right)
    c_n = c + 1;
    if (is_pos(r_n, c_n) && board[r_n][c_n] == 'k')
        return false;

    // left move (up)
    r_n = r - 1;
    c_n = c - 2;
    if (is_pos(r_n, c_n) && board[r_n][c_n] == 'k')
        return false;

    // left move (down)
    r_n = r + 1;
    if (is_pos(r_n, c_n) && board[r_n][c_n] == 'k')
        return false;

    // right move (up)
    r_n = r - 1;
    c_n = c + 2;
    if (is_pos(r_n, c_n) && board[r_n][c_n] == 'k')
        return false;

    // right move (down)
    r_n = r + 1;
    if (is_pos(r_n, c_n) && board[r_n][c_n] == 'k')
        return false;

    return true;
}

int main() {
    std::vector<std::string> board;
    for (int i = 0; i < 5; ++i) {
        std::string line;
        std::getline(std::cin, line);
        board.push_back(line);
    }

    int knights = 0;
    for (std::size_t r = 0; r < board.size(); ++r) {
        for (std::size_t c = 0; c < board.size(); ++c) {
            if (board[r][c] == 'k') {
                ++knights;
                if (!is_valid(board, r, c)) {
                    std::cout << "invalid" << std::endl;
                    return 0;
                }
            }
        }
    }

    if (knights != 9)
        std::cout << "invalid" << std::endl;
    else
        std::cout << "valid" << std::endl;

    return 0;
}
