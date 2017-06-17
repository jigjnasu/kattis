/*
  Kattis.com
  Problem Pot.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 2nd, 2017
*/

#include <iostream>
#include <limits>
#include <string>
#include <set>

void cities_travelled() {
    std::set<std::string> cities;
    int t = 0;
    std::cin >> t;
    std::cin.ignore();

    while (t--) {
        std::string city;
        std::getline(std::cin, city);

        cities.insert(city);
    }

    std::cout << cities.size() << std::endl;    
}

int main() {
    int n = 0;
    std::cin >> n;

    while (n--)
        cities_travelled();

    return 0;
}
