/*
  Kattis.com
  Problem Identifying Map Tiles.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 10/08/2017
 */

#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    int x = 0;
    int y = 0;
    int l = static_cast<int>(s.size());
    for (std::size_t i = 0; i < l; ++i) {
        if (s[i] == '1' || s[i] == '3')
            x += 1 << (l - i - 1);
        if (s[i] == '2' || s[i] == '3')
            y += 1 << (l - i - 1);
    }

    std::cout << l << " " << x << " " << y << std::endl;

    return 0;
}
