/*
  Kattis.com
  Problem Engineering English.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 17/06/2017
*/

#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>

std::string convert(const std::string& word) {
    std::string result;
    for (std::size_t i = 0; i < word.size(); ++i) {
        if (word[i] >= 'A' && word[i] <= 'Z')
            result.push_back(word[i] - 'A' + 'a');
        else
            result.push_back(word[i]);
    }

    return result;
}

int main() {
    std::string line;
    std::unordered_map<std::string, char> dictionary;
    while (std::getline(std::cin, line)) {
        std::istringstream iss(line);

        while (iss) {
            std::string word;
            iss >> word;

            if (word.size()) {
                const std::string temp = convert(word);
            
                if (dictionary[temp] == 'y') {
                    std::cout << ". ";
                } else {
                    std::cout << word << " ";
                    dictionary[temp] = 'y';
                }
            }
        }
        
        std::cout << std::endl;
    }

    return 0;
}
