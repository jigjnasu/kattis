/*
  Kattis.com
  Problem Variable Arithmetic.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  26/12/2017
*/

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>

inline bool is_numeric(char c) {
    return (c >= '0' && c <= '9');
}

int main() {
    std::map<std::string, int> dict;

    while (1) {
        std::vector<std::string> output;
        int num = 0;
        std::string line;
        std::getline(std::cin, line);
        if (line == "0")
            break;

        std::istringstream iss(line);

        const std::size_t pos = line.find("=");
        if (pos == std::string::npos) {
            std::string w;
            while (iss >> w) {
                if (w != "+") {
                    if (is_numeric(w[0])) {
                        num += std::atoi(w.c_str());
                    } else {
                        if (dict[w])
                            num += dict[w];
                        else
                            output.push_back(w);
                    }
                }
            }

            bool need_plus = false;
            if (num) {
                std::cout << num;
                need_plus = true;
            }

            if (output.size()) {
                std::size_t i = 0;
                while (i < output.size()) {
                    if (need_plus)
                        std::cout << " + ";
                    std::cout << output[i];
                    ++i;
                    need_plus = true;
                }
            }

            std::cout << std::endl;
        } else {
            std::string v;
            std::string e;
            std::string n;

            iss >> v >> e >> n;

            dict[v] = std::atoi(n.c_str());
        }
    }

    return 0;
}
