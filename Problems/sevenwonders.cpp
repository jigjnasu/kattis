/*
  Kattis.com
  Problem Seven Wonders.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 2nd, 2017
 */

#include <iostream>
#include <string>
#include <vector>

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    std::string line;
    std::getline(std::cin, line);

    int t = 0;
    int c = 0;
    int g = 0;
    for (std::size_t i = 0; i < line.size(); ++i)
        if (line[i] == 'T')
            ++t;
        else if (line[i] == 'C')
            ++c;
        else
            ++g;

    printf("%d\n", t * t + c * c + g * g + (7 * min(min(t, c), g)));

    return 0;
}
