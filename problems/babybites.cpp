/*
  Kattis.com
  Problem baby bytes.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 28/11/2018
 */

#include <bits/stdc++.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    std::cin.ignore();

    std::string line;
    std::getline(std::cin, line);

    bool okay = true;
    int i = 1;
    std::istringstream iss(line);
    std::string w;
    while (iss >> w) {
        if (w != "mumble")
            if (std::atoi(w.c_str()) != i)
                okay = false;
        ++i;
    }

    printf("%s\n", okay ? "makes sense" : "something is fishy");
    return 0;
}
