/*
  Kattis.com
  Problem FBI Universal Control Numbers.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 14/11/2017
*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>

const std::vector<int> coffiecents = {2, 4, 5, 7, 8, 10, 11, 13};
const std::string db = "0123456789ACDEFHJKLMNPRTVWX";

int main() {
    std::map<char, char> dict;
    dict['B'] = '8';
    dict['G'] = 'C';
    dict['I'] = '1';
    dict['O'] = '0';
    dict['Q'] = '0';
    dict['S'] = '5';
    dict['U'] = 'V';
    dict['Y'] = 'V';
    dict['Z'] = '2';

    int n = 0;
    std::cin >> n;
    std::cin.ignore();

    while (n--) {
        std::string line;
        std::getline(std::cin, line);

        int k = 0;
        std::string word;
        std::istringstream iss(line);
        iss >> k >> word;

        int c = 0;
        unsigned long long int v = 0;
        int i = 0;
        while (i < 8) {
            if (dict[word[i]])
                word[i] = dict[word[i]];
            const int t = db.find(word[i]);
            c += coffiecents[i] * t;
            v *= 27;
            v += t;
            ++i;
        }

        if (word[i] != db[c % 27])
            std::cout << k << " Invalid" << std::endl;
        else
            std::cout << k << " " << v << std::endl;
    }

    return 0;
}
