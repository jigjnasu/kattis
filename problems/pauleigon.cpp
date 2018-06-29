/*
  Kattis.com
  Problem Paul Eigon.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 17/04/2017
*/

#include <cstdio>

int main() {
    int n = 0;
    int p = 0;
    int q = 0;
    scanf("%d %d %d", &n, &p, &q);

    if (((p + q) / n) % 2)
        printf("opponent\n");
    else
        printf("paul\n");
    
    return 0;
}
