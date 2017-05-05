/*
  Kattis.com
  Problem Line Them Up.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 13/04/2017
*/

#include <iostream>
#include <string>

int main() {
    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    if (n == 1)
        std::cout << "NEITHER" << std::endl;

    std::string last_one;
    std::string this_one;
    std::getline(std::cin, this_one);
    last_one = this_one;
    n--;

    int increase = true;
    int decrease = true;
    while (n--) {
        std::getline(std::cin, this_one);
        if (this_one > last_one)
            decrease = false;
        else
            increase = false;
        last_one = this_one;
    }

    if (increase)
        std::cout << "INCREASING" << std::endl;
    else if (decrease)
        std::cout << "DECREASING" << std::endl;
    else
        std::cout << "NEITHER" << std::endl;

    return 0;
}
