/*
  Kattis.com
  Problem What does the fox say?.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 16/06/2017
*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

const std::string fox = "what does the fox say?";

int main() {
    int t = 0;
    std::cin >> t;
    std::cin.ignore();

    while (t--) {
        std::string line;
        std::vector<std::string> sounds;
        std::getline(std::cin, line);

        std::istringstream iss(line);
        while (iss) {
            std::string sound;
            iss >> sound;
            sounds.push_back(sound);
        }

        while (1) {
            std::string animal;
            std::getline(std::cin, animal);
            if (animal == fox)
                break;

            std::string a;
            std::string b;
            std::string c;
            std::istringstream iss(animal);

            iss >> a >> b >> c;

            for (std::size_t i = 0; i < sounds.size(); ++i)
                if (sounds[i] == c)
                    sounds[i] += '0';
        }

        for (std::size_t i = 0; i < sounds.size(); ++i)
            if (sounds[i][sounds[i].size() - 1] != '0')
                std::cout << sounds[i] << " ";
        std::cout << std::endl;
    }

    return 0;
}
