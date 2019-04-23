/*
  Kattis.com
  Problem: Calculating the dart scores
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 24/04/2019
 */

#include <bits/stdc++.h>

const std::vector<std::string> d = {"single", "double", "triple"};

void score(int n) {
    for (int a = 1; a <= 20; ++a) {
        for (int b = 1; b <= 20; ++b) {
            for (int c = 1; c <= 20 ; ++c) {
                for (int i = 0; i <= 3; ++i) {
                    for (int j = 0; j <= 3; ++j) {
                        for (int k = 0; k <= 3; ++k) {
                            if ((a * i + b * j + c * k) == n) {
                                if (i) printf("%s %d\n", d[i - 1].c_str(), a);
                                if (j) printf("%s %d\n", d[j - 1].c_str(), b);
                                if (k) printf("%s %d\n", d[k - 1].c_str(), c);
                                return;
                            }
                        }
                    }
                }
            }
        }
    }
    printf("impossible\n");
}

int main() {
    int n = 0;
    scanf("%d", &n);
    score(n);

    return 0;
}
