/*
  Kattis.com
  Problem ASCII Addition.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 08/10/2017
*/

#include <iostream>
#include <string>
#include <vector>

int digit(const std::vector<std::vector<std::string>>& dict,
          const std::vector<std::string>& data) {
    for (std::size_t i = 0; i < dict.size(); ++i)
        if (data == dict[i])
            return i;
}

void print(const std::vector<std::vector<std::string>>& dict, const std::string& n) {
    std::vector<std::string> result;
    for (int i = 0; i < 7; ++i)
        result.push_back("");
    int i = 0;
    while (i < n.size() - 1) {
        for (int j = 0; j < 7; ++j) {
            result[j] += dict[n[i] - '0'][j];
            result[j] += ".";
        }
        ++i;
    }

    for (int j = 0; j < 7; ++j)
        result[j] += dict[n[i] - '0'][j];

    for (std::size_t i = 0; i < result.size(); ++i)
        std::cout << result[i] << std::endl;
}

int main() {
    std::vector<std::vector<std::string>> dict = {
                                                   // zero 
        					  {"xxxxx",
                                                   "x...x",
                                                   "x...x",
                                                   "x...x",
                                                   "x...x",
                                                   "x...x",
                                                   "xxxxx"},

                                                  // one
                                                  {"....x",
                                                   "....x",
                                                   "....x",
                                                   "....x",
                                                   "....x",
                                                   "....x",
                                                   "....x"},

                                                  // two
                                                  {"xxxxx",
                                                   "....x",
                                                   "....x",
                                                   "xxxxx",
                                                   "x....",
                                                   "x....",
                                                   "xxxxx" },

                                                  // three
                                                  {"xxxxx",
                                                   "....x",
                                                   "....x",
                                                   "xxxxx",
                                                   "....x",
                                                   "....x",
                                                   "xxxxx"},

                                                  // four
                                                  {"x...x",
                                                   "x...x",
                                                   "x...x",
                                                   "xxxxx",
                                                   "....x",
                                                   "....x",
                                                   "....x"},

                                                  // five
                                                  {"xxxxx",
                                                   "x....",
                                                   "x....",
                                                   "xxxxx",
                                                   "....x",
                                                   "....x",
                                                   "xxxxx"},

                                                  // six
                                                  {"xxxxx",
                                                   "x....",
                                                   "x....",
                                                   "xxxxx",
                                                   "x...x",
                                                   "x...x",
                                                   "xxxxx"},

                                                  // seven
                                                  {"xxxxx",
                                                   "....x",
                                                   "....x",
                                                   "....x",
                                                   "....x",
                                                   "....x",
                                                   "....x"},

                                                  // eight
                                                  {"xxxxx",
                                                   "x...x",
                                                   "x...x",
                                                   "xxxxx",
                                                   "x...x",
                                                   "x...x",
                                                   "xxxxx"},

                                                  // nine
                                                  {"xxxxx",
                                                   "x...x",
                                                   "x...x",
                                                   "xxxxx",
                                                   "....x",
                                                   "....x",
                                                   "xxxxx"},
                                                  
                                                  // plus
                                                  {".....",
                                                   "..x..",
                                                   "..x..",
                                                   "xxxxx",
                                                   "..x..",
                                                   "..x..",
                                                   "....."}
    };

    std::vector<std::string> data;
    std::string line;
    for (int i = 0; i < 7; ++i) {
        std::getline(std::cin, line);
        data.push_back(line);
    }

    int a = 0;
    int b = 0;
    bool c = true;
    for (std::size_t i = 0; i < data[0].size(); i += 6) {
        std::vector<std::string> t;
        for (int j = 0; j < 7; ++j)
            t.push_back(data[j].substr(i, 5));

        const int d = digit(dict, t);
        if (d == 10) {
            c = false;
        } else {
            if (c)
                a = (a * 10) + d;
            else
                b = (b * 10) + d;
        }
    }

    print(dict, std::to_string(a + b));

    return 0;
}
