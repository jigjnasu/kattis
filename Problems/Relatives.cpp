/*
  Kattis.com
  Problem Relatives.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 10/05/2017
*/

#include <cstdio>
#include <cmath>
#include <ctime>
#include <bitset>
#include <vector>

const long long size = 1e5+10;

void sieve(std::vector<long long>& primes) {
    printf("%lld\n", size);
#if 0
    std::bitset<size> bits;
    bits.set();
    for (long long i = 2; i <= size; ++i) {
        if (bits[i]) {
            primes.push_back(i);
            for (long long j = i * 2; j < size; j += i)
                bits[j] = 0;
        }
    }
#endif
}


int main() {
    std::vector<long long> primes;
    sieve(primes);

    for (std::size_t i = 0; i < primes.size(); ++i)
        printf("%lld ", primes[i]);
    printf("\n");

    return 0;
}
