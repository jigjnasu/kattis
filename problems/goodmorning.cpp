/*
  Kattis.com
  Problem Good Morning!.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 01/08/2017
*/

#include <iostream>
#include <string>
#include <map>

struct Pos {
    Pos() : r(0), c(0) {}
    Pos(int x, int y) : r(x), c(y) {}

    int r;
    int c;
};

std::map<char, Pos> keyboard = { { '0', Pos(3, 1) },
                                 { '1', Pos(0, 0) },
                                 { '2', Pos(0, 1) },
                                 { '3', Pos(0, 2) },
                                 { '4', Pos(1, 0) },
                                 { '5', Pos(1, 1) },
                                 { '6', Pos(1, 2) },
                                 { '7', Pos(2, 0) },
                                 { '8', Pos(2, 1) },
                                 { '9', Pos(2, 2) }, };


bool valid(const std::string& n) {
    for (std::size_t i = 1; i < n.size(); ++i) {
        if (keyboard[n[i]].r < keyboard[n[i - 1]].r ||
            keyboard[n[i]].c < keyboard[n[i - 1]].c)
            return false;
    }

    return true;
}

int find(int n) {
    int f = n + 1;
    int b = n - 1;
    while (1) {
        if (valid(std::to_string(f)))
            return f;
        if (valid(std::to_string(b)))
            return b;
        ++f;
        --b;
    }
}

int close_to_me(const std::string& n) {
    if (valid(n))
        return std::atoi(n.c_str());
    else
        return find(std::atoi(n.c_str()));
}

int main() {
    int t = 0;
    std::cin >> t;
    std::cin.ignore();

    while (t--) {
        std::string n;
        std::getline(std::cin, n);
        std::cout << close_to_me(n) << std::endl;
    }

    return 0;
}

