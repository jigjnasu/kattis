/*
  Kattis.com
  Problem False Sense of Security.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 05/05/2017
 */

#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> codes = { ".-", "-...", "-.-.", "-..", ".", "..-.",
                                   "--.", "....", "..", ".---", "-.-", ".-..",
                                   "--", "-.", "---", ".--.", "--.-", ".-.",
                                   "...", "-", "..-", "...-", ".--", "-..-",
                                   "-.--", "--.." };

const std::string underscore = "..--";
const std::string period = "---.";
const std::string comma = ".-.-";
const std::string question_mark = "----";

void swap(char& a, char& b) {
    const char t = a;
    a = b;
    b = t;
}

void reverse(std::string& length) {
    int i = 0;
    int j = length.size() - 1;
    while (i < j)
        swap(length[i++], length[j--]);
}

std::string message(const std::string& cipher, const std::string& length) {
    std::string msg;
    int j = 0;
    
    for (std::size_t i = 0; i < length.size(); ++i) {
        if ('4' == length[i] && underscore == cipher.substr(j, 4)) {
            msg += '_';
            j += 4;
        } else if ('4' == length[i] && period == cipher.substr(j, 4)) {
            msg += '.';
            j += 4;
        } else if ('4' == length[i] && comma == cipher.substr(j, 4)) {
            msg += ',';
            j += 4;
        } else if ('4' == length[i] && question_mark == cipher.substr(j, 4)) {
            msg += '?';
            j += 4;
        } else {
            // This cipher belongs to A to Z
            for (std::size_t k = 0; k < codes.size(); ++k) {
                if (cipher.substr(j, length[i] - '0') == codes[k]) {
                    msg += k + 'A';
                    j += length[i] - '0';
                    break;
                }
            }
        }
    }

    return msg;
}

int main() {
    std::string line;

    while (std::getline(std::cin, line)) {
        std::string length;
        std::string cipher;
        for (std::size_t i = 0; i < line.size(); ++i) {
            if (line[i] >= 'A' && line[i] <= 'Z') {
                length.push_back(codes[line[i] - 'A'].size() + '0');
                cipher += codes[line[i] - 'A'];
            } else {
                length.push_back('4');
                if (line[i] == '_')
                    cipher += underscore;
                else if (line[i] == '.')
                    cipher += period;
                else if (line[i] == ',')
                    cipher += comma;
                else
                    cipher += question_mark;                
            }

        }

        int len_total = 0;
        for (std::size_t i = 0; i < length.size(); ++i)
            len_total += length[i] - '0';
        reverse(length);

        std::cout << message(cipher, length) << std::endl;
    }

    return 0;
}
