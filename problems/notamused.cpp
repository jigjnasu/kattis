/*
  Kattis.com
  Problem Friday the 13th.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 18/06/2017
*/

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <vector>
#include <map>

const std::string OPEN  = "OPEN";
const std::string CLOSE = "CLOSE";
const std::string ENTER = "ENTER";
const std::string EXIT  = "EXIT";

class Park {
public:
    Park() {}
    ~Park() {}

    void add(const std::string& name, int time) {
        m_visitors[name].push_back(time);
    }

    void close(int day) const {
        printf("Day %d\n", day);
        for (std::map<std::string, std::vector<int>>::const_iterator it = m_visitors.begin();
             it != m_visitors.end(); ++it) {
            float money = 0;
            printf("%s $", it->first.c_str());
            
            for (std::size_t i = 0; i < it->second.size(); i += 2)
                money += ((it->second[i + 1] - it->second[i]) * 0.10f);

            printf("%.2f\n", money);
        }
    }

private:
    std::map<std::string, std::vector<int>> m_visitors;
};

void open_park(int day) {
    std::string line;
    Park park;
    while (std::getline(std::cin, line)) {
        if (line == CLOSE) {
            park.close(day);
            break;
        }

        std::string name;
        std::string status;
        int time;
        std::istringstream iss(line);
        iss >> status >> name >> time;
        park.add(name, time);
    }
}

int main() {
    int day = 0;

    std::string line;
    while (std::getline(std::cin, line))
        open_park(++day);

    return 0;
}
