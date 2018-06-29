/*
  Kattis.com
  Problem ACM Contest Scoring.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 08/04/2017
*/

#include <iostream>
#include <map>

const std::string wrong = "wrong";
const std::string right = "right";

int main() {
    int right_answers = 0;
    int total_time = 0;
    std::map<char, int> list;

    while (1) {
        int time = 0;
        std::cin >> time;

        if (time == -1)
            break;

        char question = ' ';
        std::string result;
        std::cin >> question >> result;

        if (wrong == result) {
            ++list[question];
        } else {
            ++right_answers;
            total_time += time + 20 * list[question];
        }
    }

    std::cout << right_answers << " " << total_time << std::endl;
    
    return 0;
}
