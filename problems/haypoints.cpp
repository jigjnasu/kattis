/*
  Kattis.com
  Problem Hay Points.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 11/05/2017
*/

#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::size_t s;
    std::size_t t;

    std::cin >> s>> t;

    std::unordered_map<std::string, std::size_t> salary;

    while (s--)   {
        std::string job;
        std::size_t money;

        std::cin >> job >> money;
        salary[job] = money;
    }

    while (t--) {
        std::size_t total = 0;
        std::string w;
        while (std::cin >> w && w != ".")
            total += salary[w];

        std::cout << total << std::endl;
    }

    return 0;
}
