/*
  Kattis.com
  Problem Hanging Out on the Terrace.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 10/11/2017
*/

#include <iostream>
#include <string>
#include <sstream>

int main() {
    int n = 0;
    int m = 0;
    std::cin >> n >> m;
    std::cin.ignore();

    int total = 0;
    int denied = 0;
    while (m--) {
        std::string line;
        std::getline(std::cin, line);
        std::istringstream iss(line);

        std::string status;
        int size = 0;
        iss >> status >> size;

        if (status == "leave") {
            total -= size;
        } else {
            if (total + size > n)
                ++denied;
            else
                total += size;
        }
    }

    std::cout << denied << std::endl;

    return 0;
}
