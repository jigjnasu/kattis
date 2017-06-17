#include <iostream>
#include <string>
#include <unordered_map>
#include <sstream>

int main() {
    std::string line;
    std::unordered_map<std::string, std::string> dictionary;
    while (std::getline(std::cin, line) && line.size()) {
        std::string english;
        std::string foregin;

        const std::size_t pos = line.find(" ");
        dictionary[line.substr(pos + 1, line.size() - pos)] = line.substr(0, pos);
    }

    std::string word;
    while (std::cin >> word && word.size()) {
        const std::string a = dictionary[word];
        if (a.size())
            std::cout << a << std::endl;
        else
            std::cout << "eh" << std::endl;
    }

    return 0;
}
