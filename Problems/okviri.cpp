/*
  Kattis.com
  Problem Okviri.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 28/05/2017
*/

#include <iostream>
#include <cstring>
#include <string>

int main() {
    std::string line;
    std::getline(std::cin, line);

    char frame[5][75] = {0};
    for (std::size_t i = 0; i < line.size(); ++i) {
        std::string f1;
        std::string f2;
        char f3[6] = {0};
        
        if ((i + 1) % 3 == 0) {
            f1 = "..*..";
            f2 = ".*.*.";
            snprintf(f3, 6, "*.%c.*", line[i]);
        } else {
            f1 = "..#..";
            f2 = ".#.#.";
            if (i && (i + 1) % 3 == 1) {
                snprintf(f3, 6, "*.%c.#", line[i]);
            } else {
                snprintf(f3, 6, "#.%c.#", line[i]);
            }
        }

        snprintf(frame[0] + (i * 4), 6, "%s", f1.c_str());
        snprintf(frame[1] + (i * 4), 6, "%s", f2.c_str());
        snprintf(frame[2] + (i * 4), 6, "%s", f3);
        snprintf(frame[3] + (i * 4), 6, "%s", f2.c_str());
        snprintf(frame[4] + (i * 4), 6, "%s", f1.c_str());        
    }

    for (int i = 0; i < 5; ++i)
        std::cout << frame[i] << std::endl;
    
    return 0;
}
