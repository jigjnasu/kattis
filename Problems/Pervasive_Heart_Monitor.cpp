/*
  Kattis.com
  Problem Pervasive Heart Monitor.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 10/05/2017
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <iomanip>

bool is_numeric(char c) {
    return (c >= '0' && c <= '9') ? true : false;
}

int main() {
    std::string line;
    while (std::getline(std::cin, line)) {
        std::size_t last_pos = 0;
        float i = 0;
        std::string name;
        float total = 0.0f;
        // Name is at the end
        if (is_numeric(line[0])) {
            while (1) {
                const std::size_t pos = line.find(" ", last_pos + 1);
                total += std::atof(line.substr(last_pos, pos - last_pos).c_str());
                last_pos = pos;
                ++i;
                if (is_numeric(line[pos + 1]) == false)
                    break;
            }

            name = line.substr(last_pos, line.size() - last_pos);

            std::cout << std::setprecision(9) << total / i << " " << name << std::endl;
        } else { // Name is at the first
            // As the name is first one, grab it till we will get first numeric
            std::size_t pos = line.find(" ");
            while (is_numeric(line[pos + 1]) == false) {
                last_pos = pos;
                pos = line.find(" ", last_pos + 1);
            }

            name = line.substr(0, pos);
            last_pos = pos;
            while (1) {
                pos = line.find(" ", last_pos + 1);
                if (pos == std::string::npos)
                    break;
                total += std::atof(line.substr(last_pos + 1, pos - last_pos).c_str());
                last_pos = pos;
                ++i;
            }

            total += std::atof(line.substr(last_pos, line.size() - last_pos).c_str());
            ++i;
            
            std::cout << std::setprecision(9) << total / i << " " << name << std::endl;
        }
    }

    return 0;
}
