/*
  Kattis.com
  Problem Poker hand.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 08/12/2018
*/

#include <bits/stdc++.h>

int main() {
    std::string h;
    std::getline(std::cin, h);

    std::string c;
    std::istringstream iss(h);

    int m = 0;
    std::map<char, int> dict;
    while (iss >> c) {
        ++dict[c[0]];
        if (dict[c[0]] > m)
            m = dict[c[0]];
    }

    printf("%d\n", m);

    return 0;
}
