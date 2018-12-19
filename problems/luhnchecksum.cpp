/*
  Kattis.com
  Problem luhn's check sum.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 20/12/2018
*/


#include <bits/stdc++.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    std::cin.ignore();

    while (n--) {
        std::string s;
        std::getline(std::cin, s);

        int v = 0;
        int i = 0;
        int j = 0;
        if (s.size() % 2) {
            i = 0;
            j = 1;
        } else {
            i = 1;
            j = 0;
        }

        while (i < s.size()) {
            v += (s[i] -'0');
            i += 2;
        }

        while (j < s.size()) {
            int a = (s[j] - '0') << 1;
            if (a > 9)
                a = (a % 10) + (a / 10);
            v += a;
            j += 2;
        }

        if (v % 10)
            printf("FAIL\n");
        else
            printf("PASS\n");
    }

    return 0;
}

