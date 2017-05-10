/*
  Kattis.com
  Problem Happy Happy Prime Prime.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 10/05/2017
*/

#include <cstdio>
#include <cmath>

bool is_prime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i <= std::sqrt(n); ++i)
        if (n % i == 0)
            return false;
    return true;
}

int happy(int n) {
    int total = 0;
    while (n) {
        total += (n % 10) * (n % 10);
        n /= 10;
    }

    return total;
}

bool is_happy(int n) {
    int dict[528] = {0};

    while (1) {
        n = happy(n);
        if (dict[n])
            return false;
        if (n == 1)
            return true;

        dict[n] = 1;
    }

    return false;
}

bool is_happy_prime(int n) {
    if (!is_prime(n))
        return false;
    else if (!is_happy(n))
        return false;
    else
        return true;
}

int main() {
    int n = 0;
    scanf("%d", &n);

    while (n--) {
        int k = 0;
        int m = 0;
        scanf("%d %d", &k, &m);

        printf("%d %d %s\n", k, m, is_happy_prime(m) ? "YES" : "NO");
    }
    
    return 0;
}
