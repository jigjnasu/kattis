/*
  Kattis.com
  Problem Cetiri.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 17/04/2017
*/

#include <cstdio>
#include <vector>
#include <algorithm>

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    std::vector<int> list;
        
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("%d\n", a);
        return 0;
    }
    
    list.push_back(a);
    list.push_back(b);
    list.push_back(c);
    std::sort(list.begin(), list.end());
    
    const int d = min(list[2] - list[1], list[1] - list[0]);
    int n = list[0];
    for (int i = 1; i <= 3; ++i) {
        n += d;
        if (n != list[1] && n != list[2]) {
            printf("%d\n", n);
            break;
        }
    }

    return 0;
}
