/*
  Kattis.com
  Problem Recount.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 18/04/2017
 */

#include <iostream>
#include <string>
#include <map>

const std::string stop = "***";

int main() {
    std::map<std::string, int> votes;
    while (1) {
        std::string line;
        std::getline(std::cin, line);
        if (line == stop)
            break;

        ++votes[line];
    }

    int max_votes = 0;
    std::string candidate;
    int count = 0;

    for (std::map<std::string, int>::const_iterator it = votes.begin();
         it != votes.end(); ++it) {
        if (it->second > max_votes) {
            candidate = it->first;
            count = 1;
            max_votes = it->second;
        } else if (it->second == max_votes) {
            ++count;
        }
    }

    if (count > 1)
        std::cout << "Runoff!" << std::endl;
    else
        std::cout << candidate << std::endl;

    return 0;
}
