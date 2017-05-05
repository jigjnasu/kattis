/*
  Kattis.com
  Problem Alphabet Spam.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 05/05/2017
 */


#include <iostream>
#include <string>

const char space = '_';

const char low_s = 'a';
const char low_e = 'z';

const char cap_s = 'A';
const char cap_e = 'Z';

int main() {
    std::string line;
    std::getline(std::cin, line);

    int space_count  = 0;
    int lower_count  = 0;
    int upper_count  = 0;
    int symbol_count = 0;

    for (std::size_t i = 0; i < line.size(); ++i) {
        if (line[i] == space)
            ++space_count;
        else if (line[i] >= low_s && line[i] <= low_e)
            ++lower_count;
        else if (line[i] >= cap_s && line[i] <= cap_e)
            ++upper_count;
        else
            ++symbol_count;
    }

    printf("%.16lf\n", space_count  / static_cast<double>(line.size()));
    printf("%.16lf\n", lower_count  / static_cast<double>(line.size()));
    printf("%.16lf\n", upper_count  / static_cast<double>(line.size()));
    printf("%.16lf\n", symbol_count / static_cast<double>(line.size()));    

    return 0;
}
