/*
  Kattis.com
  Problem Words for Numbers.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 18/04/2017
*/

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

const std::string space = " ";

const std::vector<std::string> counting_1 = { "zero",
                                              "one",
                                              "two",
                                              "three",
                                              "four",
                                              "five",
                                              "six",
                                              "seven",
                                              "eight",
                                              "nine" };
const std::vector<std::string> counting_2 = { "ten",
                                              "eleven",
                                              "twelve",
                                              "thirteen",
                                              "fourteen",
                                              "fifteen",
                                              "sixteen",
                                              "seventeen",
                                              "eighteen",
                                              "nineteen" };
const std::vector<std::string> counting_3 = { "twenty",
                                              "thirty",
                                              "forty",
                                              "fifty",
                                              "sixty",
                                              "seventy",
                                              "eighty",
                                              "ninety",
                                              "hundred",
                                              "thousand",
                                              "million",
                                              "billion" };

std::string number(int n) {
    if (n >= 0 && n <= 9) {
        return counting_1[n];
    } else if (n >= 10 && n <= 19) {
        return counting_2[n - 10];
    } else if (n >= 20 && n <= 99) {
        if (n % 10 == 0)
            return counting_3[(n / 10) - 2];
        else
            return counting_3[(n / 10) - 2] + "-" + counting_1[n % 10];
    }
}

int main() {
    std::string line;
    while (1) {
        std::getline(std::cin, line);
        if (line.size() <= 0)
            return 0;

        std::size_t last_pos = 0;
        std::size_t pos = line.find(space);
        std::string word = line.substr(0, pos);
        if (word[0] >= '0' && word[0] <= '9') {
            std::string n = number(std::atoi(word.c_str()));
            n[0] = n[0] - 'a' + 'A';
            std::cout << n << " ";
        } else {
            std::cout << word << " ";
        }
        
        while (pos != std::string::npos) {
            last_pos = pos;
            pos = line.find(space, pos + 1);
            word = line.substr(last_pos + 1, pos - last_pos);
            if (word[0] >= '0' && word[0] <= '9')
                std::cout << number(std::atoi(word.c_str())) << " ";
            else
                std::cout << word << " ";
        }
    }

    return 0;
}
