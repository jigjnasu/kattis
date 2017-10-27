/*
  Kattis.com
  Problem Solving for A Rational Sequence (Take 3).
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 28/10/2017
*/

#include <cstdio>

void compute(std::size_t n, std::size_t& num, std::size_t& den) {
    if (n == 1) {
        num += 1;
        den += 1;
    } else {
        // left child of the node
        compute(n >> 1, num, den);
        if (n % 2 == 0)
            den += num;
        else
            num += den;
    }
}

int main() {
    std::size_t n = 0;
    scanf("%lu", &n);

    while (n--) {
        std::size_t i = 0;
        std::size_t x = 0;
        scanf("%lu %lu", &i, &x);

        std::size_t num = 0;
        std::size_t den = 0;
        compute(x, num, den);
        printf("%lu %lu/%lu\n", i, num, den);
    }

    return 0;
}

