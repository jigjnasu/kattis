/*
  Kattis.com
  This Ain't Your Grandpa's Checkerboard
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 31/12/2019
 */

#include <bits/stdc++.h>

inline bool check_row(const std::string& line) {
    std::size_t pos = line.find("BBB");
    if (pos != std::string::npos)
        return false;
    pos = line.find("WWW");
    if (pos != std::string::npos)
        return false;

    int b = 0;
    int w = 0;
    for (char c : line)
        if (c == 'B')
            ++b;
        else
            ++w;
    return b == w;
}

inline bool check_col(const std::vector<std::string>& board, int col) {
    std::string line;
    for (int r = 0; r < board.size(); ++r)
        line.push_back(board[r][col]);
    return check_row(line);
}

int main() {
    int n = 0;
    scanf("%d", &n);
    const int m = n;

    std::vector<std::string> board;

    while (n--) {
        std::cin.ignore();
        char line[m + 1] = {0};
        scanf("%s", &line);
        board.push_back(line);
    }

    bool result = true;
    // check all rows first
    for (std::string line : board) {
        if (check_row(line) == false) {
            result = false;
            break;
        }
    }

    // check all cols now
    for (std::size_t col = 0; col < board.size(); ++col) {
        if (check_col(board, col) == false) {
            result = false;
            break;
        }
    }

    printf("%d\n", result);
    return 0;
}
