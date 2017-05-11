/*
  Kattis.com
  Problem Relatives.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 11/05/2017
 */

#include <cstdio>
#include <string>
#include <vector>
#include <cmath>

const int limit = 1000000000;

void sieve_of_atkins(std::vector<int>& primes) {
    // 2 and 3 are known to be prime
    primes.push_back(2);
    primes.push_back(3);

    // Initialise the sieve array with false values
    //bool sieve[limit] = {false};
    std::string sieve;
    for (std::size_t i = 0; i <= limit; ++i)
        sieve.push_back(0);

    for (int x = 1; x * x <= limit; ++x) {
        for (int y = 1; y * y <= limit; ++y) {
            // Main part of Sieve of Atkin
            int n = (4 * x * x) + (y * y);
            if (n <= limit && (n % 12 == 1 || n % 12 == 5))
                sieve[n] ^= 1;
            
            n = (3 * x * x) + (y * y);
            if (n <= limit && n % 12 == 7)
                sieve[n] ^= 1;

            n = (3 * x * x ) - (y * y);
            if (x > y && n <= limit && n % 12 == 11)
                sieve[n] ^= 1;
        }
    }

    // Mark all multiples of squares as non-prime
    for (int i = 5; i * i <= limit; ++i) {
        if (sieve[i]) {
            for (int j = i * i; j < limit; j += i * i)
                sieve[j] = 0;
        }
    }

    // Print primes using sieve[]
    for (int i = 5; i <= limit; ++i)
        if (sieve[i])
            primes.push_back(i);    
}


int main() {
    std::vector<int> primes;
    sieve_of_atkins(primes);

    while (1) {
        int n = 0;
        scanf("%d", &n);

        if (n == 0)
            break;

        std::size_t i = 0;
        int co_primes = n;        
        while (primes[i] <= n) {
            if (n % primes[i] == 0)
                co_primes = (co_primes * (primes[i] - 1)) / primes[i];
            ++i;
        }

        printf("%d\n", co_primes);
    }

    return 0;
}
