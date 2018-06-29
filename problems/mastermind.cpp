/*
  Kattis.com
  Problem Mastering Mastermind.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 16/06/2017
*/

#include <iostream>
#include <string>
#include <sstream>

inline int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int n = 0;
    std::string s1;
    std::string s2;

    std::string line;
    std::getline(std::cin, line);
    std::istringstream iss(line);
    iss >> n >> s1 >> s2;

    int r = 0;
    int s = 0;
    int r_d[26] = {0};
    int s_d[26] = {0};
    
    for (int i = 0; i < n; ++i) {
        if (s1[i] == s2[i]) {
            ++r;
        } else {
            ++r_d[s1[i] - 'A'];
            ++s_d[s2[i] - 'A'];
        }
    }

    for (int i = 0; i < 26; ++i)
        s += min(r_d[i], s_d[i]);

    std::cout << r << " " << s << std::endl;
    
    return 0;
}
