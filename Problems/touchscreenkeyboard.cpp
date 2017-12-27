/*
  Kattis.com
  Problem Touchscreen Keyboard.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  27/12/2017
*/

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <algorithm>

inline int distance(char f, char t, std::unordered_map<char, int>& keyboard) {
    return std::abs(keyboard[f] % 10 - keyboard[t] % 10) +
        std::abs(keyboard[f] / 10 - keyboard[t] / 10);
}

struct Data {
    Data() : d(0) {}
    Data(int distance, const std::string& word) : d(distance), w(word) {}

    bool operator < (const Data& rhs) {
        if (d == rhs.d)
            return w < rhs.w;
        else
            return d < rhs.d;
    }

    int d;
    std::string w;
};

int main() {
    std::unordered_map<char, int> keyboard = { {'q', 0}, {'w', 10}, {'e', 20}, {'r', 30}, {'t', 40}, {'y', 50}, {'u', 60}, {'i', 70}, {'o', 80}, {'p', 90},
                                               {'a', 1}, {'s', 11}, {'d', 21}, {'f', 31}, {'g', 41}, {'h', 51}, {'j', 61}, {'k', 71}, {'l', 81},
                                               {'z', 2}, {'x', 12}, {'c', 22}, {'v', 32}, {'b', 42}, {'n', 52}, {'m', 62} };

    int t = 0;
    std::cin >> t;
    std::cin.ignore();

    while (t--) {
        std::vector<Data> list;
        std::string word;
        int n = 0;
        std::cin >> word >> n;

        const std::size_t length = word.size();
        while (n--) {
            std::string w;
            std::cin >> w;

            int d = 0;
            for (std::size_t i = 0; i < word.size(); ++i)
                d += distance(word[i], w[i], keyboard);

            list.push_back(Data(d, w));
        }

        std::sort(list.begin(), list.end());
        for (std::size_t i = 0; i < list.size(); ++i)
            std::cout << list[i].w << " " << list[i].d << std::endl;
    }

    return 0;
}

