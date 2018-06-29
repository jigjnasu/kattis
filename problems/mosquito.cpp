/*
  Kattis.com
  Problem Mosquito Multiplication.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 29/10/2017
*/

#include <iostream>
#include <sstream>
#include <string>

int main() {
    int M = 0;
    int P = 0;
    int L = 0;
    int E = 0;
    int R = 0;
    int S = 0;
    int N = 0;
    std::string line;
    while (std::getline(std::cin, line)) {
        std::istringstream iss(line);
        iss >> M >> P >> L >> E >> R >> S >> N;

        while (N--) {
            const int eggs = M * E;
            M = P / S;
            P = L / R;
            L = eggs;
        }

        std::cout << M << std::endl;
    }

    return 0;
}
