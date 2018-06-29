/*
  Kattis.com
  Problem Marko.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 04/07/2017.
 */

#include <iostream>
#include <vector>
#include <string>

const std::string key_pos = "22233344455566677778889999";

bool found(const std::string& word, const std::string& key) {
    std::size_t i = 0;
    while (i < word.size()) {
        if (key_pos[word[i] - 'a'] != key[i])
            return false;
        ++i;
    }
    
    return true;
}

int main() {
    std::vector<std::string> data;

    int t = 0;
    std::cin >> t;
    std::cin.ignore();
    while (t--) {
        std::string line;
        std::getline(std::cin, line);
        data.push_back(line);
    }

    std::string key;
    std::getline(std::cin, key);

    int count = 0;
    for (std::size_t i = 0; i < data.size(); ++i)
        if (found(data[i], key))
            ++count;

    std::cout << count << std::endl;
    
    return 0;
}
