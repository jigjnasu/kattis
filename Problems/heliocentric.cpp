/*
  Kattis.com
  Problem Heliocentric.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 05/12/2017
*/

#include <iostream>
#include <string>
#include <sstream>

int days(int e, int m) {
    int i = 0;
    while (1) {
        const int x = (i * 365) - e;
        if ((687 - x - m) % 687 == 0)
            return x;
        ++i;
    }
}

int main() {
    int i = 1;
    std::string line;
    while (std::getline(std::cin, line)) {
        int e = 0;
        int m = 0;

        std::istringstream iss(line);
        iss >> e >> m;
        printf("Case %d: %d\n", i++, days(e, m));
    }

    return 0;
}

