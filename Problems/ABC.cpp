/*
  Kattis.com
  Problem ABC.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 18/04/2017
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    std::vector<int> num;
    
    std::cin >> a >> b >> c;
    std::cin.ignore();
    num.push_back(a);
    num.push_back(b);
    num.push_back(c);    

    std::sort(num.begin(), num.end());

    std::string line;
    std::getline(std::cin, line);

    std::cout << num[line[0] - 'A'] << " "
              << num[line[1] - 'A'] << " "
              << num[line[2] - 'A'] << std::endl;
    
    return 0;
}
