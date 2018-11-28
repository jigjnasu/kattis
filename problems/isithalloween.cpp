/*
  Kattis.com
  Problem Last factorial digit.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 28/11/2018
 */

#include <bits/stdc++.h>

int main() {
    std::string s;
    std::getline(std::cin, s);
    if (s == "OCT 31" || s == "DEC 25")
        printf("yup\n");
    else
        printf("nope\n");
    return 0;
}
