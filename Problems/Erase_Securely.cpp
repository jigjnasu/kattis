/*
  Kattis.com
  Problem Paul Eigon.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 17/04/2017
*/

#include <iostream>
#include <string>

int main() {
    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    std::string a;
    std::string b;
    std::getline(std::cin, a);
    std::getline(std::cin, b);

    for (std::size_t i = 0; i < a.size(); ++i) {
        if (n % 2) {
            if (a[i] == b[i]) {
                std::cout << "Deletion failed" << std::endl;
                return 0;
            }
        } else {
            if (a[i] != b[i]) {
                std::cout << "Deletion failed" << std::endl;
                return 0;
            }
        }
    }

    std::cout << "Deletion succeeded" << std::endl;
    
    return 0;
}
