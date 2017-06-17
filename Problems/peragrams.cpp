/*
  Kattis.com
  Problem Peragrams.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 18/04/2017
*/

#include <iostream>
#include <string>

const int max = 26;

int main() {
    std::string line;
    int frequency[max] = {};
    std::getline(std::cin, line);

    for (std::size_t i = 0; i < line.size(); ++i)
        ++frequency[line[i] - 'a'];

    int total = 0;
    for (int i = 0; i < max; ++i)
        total += frequency[i] % 2;

    if (total)
        printf("%d\n", total - 1);
    else
        printf("%d\n", total);
    
    return 0;
}
