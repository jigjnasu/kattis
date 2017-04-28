/*
  Kattis.com
  Problem Secure Doors.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 28/04/2017
*/

#include <iostream>
#include <sstream>
#include <map>
#include <algorithm>
#include <vector>

int main(){
    while(1) {
        int n = 0;
        std::cin >> n;
        std::cin.ignore();
        if (n == 0)
            break;
        

        std::map<std::string, std::vector<std::string>> orders;
        while (n--){
            std::string line;
            std::getline(std::cin, line);
            std::istringstream iss(line);
            std::string name;
            iss >> name;

            std::string item;
            while (iss >> item)
                orders[item].push_back(name);
        }
        
        for (std::map<std::string, std::vector<std::string>>::const_iterator it = orders.begin();
            it != orders.end(); ++it) {
            std::vector<std::string> names = it->second;
            std::sort(names.begin(), names.end());

            std::cout << it->first;
            for (std::size_t i = 0; i < names.size(); ++i)
                std::cout << " " << names[i];
            std::cout << std::endl;
        }
        
        std::cout << std::endl;
    }

    return 0;
}
