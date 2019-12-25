/*
  Kattis.com
  Problem Basketball one by one
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 25/12/2019.
*/

#include <bits/stdc++.h>

inline int winner(int a, int b) {
    if (a > b)
        return 0;
    else
        return 1;
}

int main() {
    std::vector<int> p(2, 0);

    char input[256] = {0};
    scanf("%s", &input);

    int i = 0;
    while (input[i]) {
        p[input[i] - 'A'] += input[i + 1] - '0';
        i += 2;
    }

    printf("%c\n", winner(p[0], p[1]) + 'A');

    return 0;
}
