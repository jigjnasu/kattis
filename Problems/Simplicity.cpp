/*
  Kattis.com
  Problem Simplicity.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 09/05/2017
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> freq;
    for (int i = 0; i < 26; ++i)
        freq.push_back(0);
    std::string line;
    std::getline(std::cin, line);

    for (std::size_t i = 0; i < line.size(); ++i)
        ++freq[line[i] - 'a'];

    std::sort(freq.begin(), freq.end());

    int simplicity = 0;
    for (std::size_t i = 0; i < freq.size() - 2; ++i)
        simplicity += freq[i];

    printf("%d\n", simplicity);
    return 0;
}
