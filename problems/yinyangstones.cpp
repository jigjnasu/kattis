/*
  Kattis.com
  Problem Yin and Yang Stones.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 01/08/2017
*/

#include <iostream>
#include <string>

int main() {
    // B W
    std::string s;
    std::getline(std::cin, s);
    int count = 0;
    for (std::size_t i = 0; i < s.size(); ++i)
        count += s[i] == 'W' ? 1 : -1;
    printf("%d\n", !count);
    return 0;
}

