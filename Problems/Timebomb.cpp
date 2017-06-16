/*
  Kattis.com
  Problem Timebomb.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 17/06/2017
*/

#include <iostream>
#include <string>
#include <vector>

class Digit {
public:
    Digit(char n,
          std::string a,
          std::string b,
          std::string c,
          std::string d,
          std::string e) {
        m_digit = n;
        m_data.push_back(a);
        m_data.push_back(b);
        m_data.push_back(c);
        m_data.push_back(d);
        m_data.push_back(e);        
    }

    bool operator == (const Digit& rhs) {
        for (std::size_t i = 0; i < m_data.size(); ++i)
            if (m_data[i] != rhs.m_data[i])
                return false;
        return true;
    }

    char digit() const {
        return m_digit;
    }

private:
    char m_digit;
    std::vector<std::string> m_data;
};

int main() {
    std::vector<Digit> digits;
    digits.push_back(Digit('0', "***", "* *", "* *", "* *", "***"));
    digits.push_back(Digit('1', "  *", "  *", "  *", "  *", "  *"));
    digits.push_back(Digit('2', "***", "  *", "***", "*  ", "***"));
    digits.push_back(Digit('3', "***", "  *", "***", "  *", "***"));
    digits.push_back(Digit('4', "* *", "* *", "***", "  *", "  *"));
    digits.push_back(Digit('5', "***", "*  ", "***", "  *", "***"));
    digits.push_back(Digit('6', "***", "*  ", "***", "* *", "***"));
    digits.push_back(Digit('7', "***", "  *", "  *", "  *", "  *"));
    digits.push_back(Digit('8', "***", "* *", "***", "* *", "***"));
    digits.push_back(Digit('9', "***", "* *", "***", "  *", "***"));                

    std::vector<std::string> input;
    for (int i = 0; i < 5; ++i) {
        std::string line;
        std::getline(std::cin, line);
        input.push_back(line);
    }

    std::string number;
    for (std::size_t i = 0; i < input[0].size(); i += 4) {
        Digit digit('0',
                    input[0].substr(i, 3),
                    input[1].substr(i, 3),
                    input[2].substr(i, 3),
                    input[3].substr(i, 3),
                    input[4].substr(i, 3));

        for (std::size_t j = 0; j < digits.size(); ++j) {
            if (digits[j] == digit)
                number += digits[j].digit();
        }
    }

    if (std::atoi(number.c_str()) % 6)
        std::cout << "BOOM!!" << std::endl;
    else
        std::cout << "BEER!!" << std::endl;
    
    return 0;
}
