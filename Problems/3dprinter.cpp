/*
  Kattis.com
  Problem 3D Printed Statues.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 19/06/2017
*/

#include <cstdio>
#include <cmath>

int main() {
    int n = 0;
    scanf("%d", &n);

    int days = 0;
    for (int p = 1; p < n; p += p)
        ++days;
    printf("%d\n", days + 1);


    return 0;
}

