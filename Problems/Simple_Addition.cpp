/*
  Kattis.com
  Problem Simple Addition.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 18/04/2017
 */

#include <iostream>
#include <string>

class Addition {
public:
    Addition() {}
    Addition(const std::string& data) {
        for (int i = data.size() - 1; i >= 0; --i)
            m_data.push_back(data[i]);
    }

    Addition(const Addition& rhs) {
        for (int i = rhs.m_data.size() - 1; i >= 0; --i)
            m_data.push_back(rhs.m_data[i]);
    }

    Addition& operator = (const Addition& rhs) {
        for (int i = rhs.m_data.size() - 1; i >= 0; --i)
            m_data.push_back(rhs.m_data[i]);
        return *this;
    }

    std::string operator + (const Addition& rhs) {
        int i = 0;
        int j = 0;
        int carry = 0;
        std::string c;

        while (i < m_data.size() && j < rhs.m_data.size()) {
            const int sum = carry + (m_data[i++] - '0') + (rhs.m_data[j++] - '0');
            c.push_back((sum % 10) + '0');
            carry = sum / 10;
        }

        while (i < m_data.size()) {
            const int sum = carry + (m_data[i++] - '0');
            c.push_back((sum % 10) + '0');
            carry = sum / 10;
        }

        while (j < rhs.m_data.size()) {
            const int sum = carry + (rhs.m_data[j++] - '0');
            c.push_back((sum % 10) + '0');
            carry = sum / 10;
        }

        while (carry) {
            c.push_back((carry % 10) + '0');
            carry /= 10;
        }

        return c;
    }

private:
    std::string m_data;
};

int main() {
    std::string a;
    std::string b;
    std::getline(std::cin, a);
    std::getline(std::cin, b);

    Addition a_a(a);
    Addition a_b(b);

    const std::string c = a_a + a_b;

    for (int i = c.size() - 1; i >= 0; --i)
        std::cout << c[i];
    std::cout << std::endl;
    return 0;
}
