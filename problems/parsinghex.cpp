#include <iostream>
#include <vector>
#include <string>

const std::string base_16 = "0123456789abcdef";

inline bool hex(char c) {
    if ((c >= '0' && c <= '9') ||
        (c >= 'a' && c <= 'f') ||
        (c >= 'A' && c <= 'F'))
        return true;
    else
        return false;
}

std::vector<std::string> valid(const std::string& n) {
    std::vector<std::string> hexs;
    std::size_t i = 0;
    while (i < n.size() - 1) {
        std::string s;
        const std::string t = n.substr(i, 2);
        if (t == "0x" || t == "0X") {
            s += t;
            i += 2;
            while (hex(n[i])) {
                if ((n[i] == '0') && (i + 1 < n.size())
                    && ((n[i + 1] == 'x') || (n[i + 1] == 'X'))) {
                    --i;
                    break;
                }
                s.push_back(n[i]);
                ++i;
            }

            hexs.push_back(s);
        }
        ++i;
    }

    return hexs;
}

std::string convert(const std::string& n) {
    std::string s;
    for (std::size_t i = 0; i < n.size(); ++i)
        if (n[i] >= 'A' && n[i] <= 'Z')
            s.push_back(n[i] - 'A' + 'a');
        else
            s.push_back(n[i]);
    
    return s;
}

std::size_t pow(int p) {
    if (p == 0) {
        return 1;
    } else if (p == 1) {
        return 16;
    } else {
        const std::size_t t = pow(p / 2);
        if (p % 2)
            return 16 * t * t;
        else
            return t * t;
    }
}

std::size_t decimal(const std::string& n) {
    std::size_t number = 0;
    for (int i = n.size() - 1; i >= 2; --i)
        number += pow(n.size() - 1 - i) * base_16.find(n[i]);

    return number;
}

int main() {
    std::string line;
    while (std::getline(std::cin, line)) {
        const std::vector<std::string> hexs = valid(line);
        for (std::size_t i = 0; i < hexs.size(); ++i)
            std::cout << hexs[i] << " " << decimal(convert(hexs[i])) << std::endl;
    }

    return 0;
}
