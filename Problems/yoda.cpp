/*
  Kattis.com
  Problem Yoda
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 21/11/2017
 */

#include <iostream>
#include <string>

void compute(const std::string& a,
             const std::string& b,
             std::size_t skip,
             std::string& a_r,
             std::string& b_r) {
    a_r = a.substr(0, skip);
    for (std::size_t i = 0; i < b.size(); ++i) {
        if (a[i + skip] == b[i]) {
            a_r.push_back(b[i]);
            b_r.push_back(b[i]);
        } else if (a[i + skip] > b[i]) {
            a_r.push_back(a[i + skip]);
        } else {
            b_r.push_back(b[i]);
        }
    }
}

void print(const std::string& n) {
    if (n.size())
        std::cout << std::atoi(n.c_str()) << std::endl;
    else
        std::cout << "YODA" << std::endl;
}

int main() {
    std::string a;
    std::string b;
    std::cin >> a >> b;

    std::string a_r;
    std::string b_r;

    if (a.size() == b.size())
        compute(a, b, 0, a_r, b_r);
    else if (a.size() > b.size())
        compute(a, b, a.size() - b.size(), a_r, b_r);
    else
        compute(b, a, b.size() - a.size(), b_r, a_r);

    print(a_r);
    print(b_r);

    return 0;
}

