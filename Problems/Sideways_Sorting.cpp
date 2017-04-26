/*
  Kattis.com
  Problem Sideways Sorting.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 25/04/2017
 */

#include <cstdio>
#include <algorithm>
#include <string>

int main() {
    std::string s = "xAXBbCdeE";

    printf("%s\n", s.c_str());
    std::sort(s.begin(), s.end());
    printf("%s\n", s.c_str());

    return 0;
}
