/*
  Kattis.com
  Problem Secure Doors.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 15/04/2017
*/

#include <iostream>
#include <string>
#include <map>

const std::string in = "entry";
const std::string out = "exit";

int main() {
    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    std::map<std::string, int> logs;
    while (n--) {
        std::string line;
        std::getline(std::cin, line);

        const std::size_t pos = line.find(" ");
        const std::string inout = line.substr(0, pos);
        const std::string name = line.substr(pos + 1, line.size());

        if (in == inout) {
            if (logs[name]) {
                std::cout << name << " entered (ANOMALY)" << std::endl;
            } else {
                std::cout << name << " entered" << std::endl;
                logs[name] = 1;
            }
        } else {
            if (logs[name]) {
                std::cout << name << " exited" << std::endl;
                logs[name] = 0;
            } else {
                std::cout << name << " exited (ANOMALY)" << std::endl;
            }
        }
    }
    
    return 0;
}
