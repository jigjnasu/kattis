/*
  Kattis.com
  Problem Busy Schedule.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 09/08/2017
*/

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

struct Time {
    Time() : i(0) {}
    Time(int a, const std::string& z) : i(a), t(z) {}

    Time(const Time& rhs) {
        i = rhs.i;
        t = rhs.t;
    }

    Time& operator = (const Time& rhs) {
        i = rhs.i;
        t = rhs.t;
        return *this;
    }

    bool operator < (const Time& rhs) {
        return i < rhs.i;
    }

    void print() {
        std::cout << t << std::endl;
    }

    int i;
    std::string t;
};

int main() {
    while (1) {
        int n = 0;
        std::cin >> n;
        std::cin.ignore();

        if (n == 0)
            break;

        std::vector<Time> schedule;
        while (n--) {
            std::string line;
            std::getline(std::cin, line);

            std::istringstream iss(line);
            int hh = 0;
            int mm = 0;
            char del = ' ';
            std::string z;

            iss >> hh >> del >> mm >> z;

            if (hh == 12)
                hh = 0;

            int index = 0;
            if (z == "a.m.")
                index = 60 * hh + mm;
            else
                index = (12 + hh) * 60 + mm;

            schedule.push_back(Time(index, line));
        }

        std::sort(schedule.begin(), schedule.end());
        for (std::size_t i = 0; i < schedule.size(); ++i)
            schedule[i].print();
    }

    return 0;
}

