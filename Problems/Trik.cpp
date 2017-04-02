/*
  Kattis.com
  Problem Trik.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 2nd, 2017
 */

#include <iostream>
#include <string>

int main() {
    int ball_pos = 1;
    std::string moves;

    std::getline(std::cin, moves);

    for (std::size_t i = 0; i < moves.size(); ++i) {
        if (moves[i] == 'A')
            if (ball_pos == 1)
                ++ball_pos;
            else if (ball_pos == 2)
                --ball_pos;

        if (moves[i] == 'B')
            if (ball_pos == 2)
                ++ball_pos;
            else if (ball_pos == 3)
                --ball_pos;

        if (moves[i] == 'C')
            if (ball_pos == 1)
                ball_pos = 3;
            else if (ball_pos == 3)
                ball_pos = 1;
    }

    std::cout << ball_pos << std::endl;
    
    return 0;
}
