/*
  Kattis.com
  Problem Reversed Binary Numbers.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 2nd, 2017
 */

#include <cstdio>
#include <string>

int pow(int x, int y) {
    if (y == 0) {
        return 1;
    } else if (y == 1) {
        return x;
    } else {
        const int t = pow(x, y / 2);
        if (y % 2)
            return x * t * t;
        else
            return t * t;
    }
}

std::string to_binary(int n) {
    std::string binary;

    while (n) {
        binary.push_back(n % 2 + '0');
        n /= 2;
    }

    return binary;
}

int to_number(const std::string& n) {
    int number = 0;
    int y = 0;
    for (int i = n.size() -1; i >= 0; --i)
        number += (n[i] - '0') * pow(2, y++);

    return number;
}

int main() {
    int n = 0;
    scanf("%d", &n);

    printf("%d\n", to_number(to_binary(n)));
    return 0;
}
