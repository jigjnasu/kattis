/*
  Kattis.com
  Problem Un-bear-able Zoo.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 09/05/2017
*/


#include <iostream>
#include <string>
#include <map>

void convert(std::string& animal) {
    for (std::size_t i = 0; i < animal.size(); ++i)
        if (animal[i] >= 'A' && animal[i] <= 'Z')
            animal[i] = animal[i] - 'A' + 'a';
}

int main() {
    int iter = 1;
    while (1) {
        int n = 0;
        std::cin >> n;
        std::cin.ignore();

        if (n == 0)
            break;

        std::map < std::string, int > zoo;
        while (n--) {
            std::string line;
            std::getline(std::cin, line);

            const std::size_t pos = line.rfind(" ");
            if (pos != std::string::npos) {
                std::string animal = line.substr(pos + 1, line.size());
                convert(animal);
                ++zoo[animal];
            } else {
                convert(line);
                ++zoo[line];
            }
        }

        std::cout << "List " << iter++ << ":" << std::endl;
        for (std::map<std::string, int>::const_iterator it = zoo.begin();
             it != zoo.end(); ++it)
            std::cout << it->first << " | " << it->second << std::endl;
    }

    return 0;
} 
