/*
  Kattis.com
  Problem WERTYU.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 28/04/2017
*/

#include <iostream>
#include <string>

const std::string problem = "problem";

void convert(std::string& line) {
    for (std::size_t i = 0; i < line.size(); ++i) {
        if (line[i] >= 'A' && line[i] <= 'Z')
            line[i] = line[i] - 'A' + 'a';
    }
}

int main() {
    std::string line;
    while (std::getline(std::cin, line)) {
        convert(line);
        const std::size_t pos = line.find(problem);
        
        if (pos != std::string::npos)
            std::cout << "yes" << std::endl;
        else
            std::cout << "no" << std::endl;
    }
    
    return 0;
}
