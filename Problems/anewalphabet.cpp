/*
  Kattis.com
  Problem A New Alphabet.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 18/08/2017
*/

#include <iostream>
#include <string>

int main() {
    std::string line;
    std::getline(std::cin, line);

    for (std::size_t i = 0; i < line.size(); ++i) {
        switch (line[i]) {
        case 'a': case 'A': std::cout << "@"; break;
        case 'b': case 'B': std::cout << "8"; break;
        case 'c': case 'C': std::cout << "("; break;
        case 'd': case 'D': std::cout << "|)"; break;
        case 'e': case 'E': std::cout << "3"; break;
        case 'f': case 'F': std::cout << "#"; break;
        case 'g': case 'G': std::cout << "6"; break;
        case 'h': case 'H': std::cout << "[-]"; break;
        case 'i': case 'I': std::cout << "|"; break;
        case 'j': case 'J': std::cout << "_|"; break;
        case 'k': case 'K': std::cout << "|<"; break;
        case 'l': case 'L': std::cout << "1"; break;
        case 'm': case 'M': std::cout << "[]\\/[]"; break;
        case 'n': case 'N': std::cout << "[]\\[]"; break;
        case 'o': case 'O': std::cout << "0"; break;
        case 'p': case 'P': std::cout << "|D"; break;
        case 'q': case 'Q': std::cout << "(,)"; break;
        case 'r': case 'R': std::cout << "|Z"; break;
        case 's': case 'S': std::cout << "$"; break;
        case 't': case 'T': std::cout << "']['"; break;
        case 'u': case 'U': std::cout << "|_|"; break;
        case 'v': case 'V': std::cout << "\\/"; break;
        case 'w': case 'W': std::cout << "\\/\\/"; break;
        case 'x': case 'X': std::cout << "}{"; break;
        case 'y': case 'Y': std::cout << "`/"; break;
        case 'z': case 'Z': std::cout << "2"; break;
        default: std::cout << line[i];
        }
    }

    std::cout << std::endl;

    return 0;
}

