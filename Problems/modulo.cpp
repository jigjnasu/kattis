/*
  Kattis.com
  Problem Modulo.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: April 2nd, 2017
 */

#include <cstdio>
#include <set>

int main() {
    std::set<int> list;
    
    for (int i = 0; i < 10; ++i) {
        int x = 0;
        scanf("%d", &x);
        
        list.insert(x % 42);
    }

    printf("%lu\n", list.size());
    
    return 0;
}
