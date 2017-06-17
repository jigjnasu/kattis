/*
  Kattis.com
  Problem Ptice.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 07/04/2017
*/

#include <iostream>
#include <string>

const std::string Adrian = "ABCABCABCABC";
const std::string Bruno  = "BABCBABCBABC";
const std::string Goran  = "CCAABBCCAABB";

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    int adrian_count = 0;
    int bruno_count = 0;
    int goran_count = 0;

    std::string line;
    std::getline(std::cin, line);

    for (std::size_t i = 0; i < line.size(); ++i) {
        if (line[i] == Adrian[i % Adrian.size()])
            ++adrian_count;
        if (line[i] == Bruno[i % Bruno.size()])
            ++bruno_count;
        if (line[i] == Goran[i % Goran.size()])
            ++goran_count;
    }

    const int m = max(max(adrian_count, bruno_count), goran_count);

    printf("%d\n", m);
    if (m == adrian_count)
        printf("Adrian\n");
    if (m == bruno_count)
        printf("Bruno\n");
    if (m == goran_count)
        printf("Goran\n");

    return 0;
} 
