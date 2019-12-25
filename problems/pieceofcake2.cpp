/*
  Kattis.com
  Problem Piece of Cake !!!
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 07/06/2017.
*/

#include <bits/stdc++.h>

int main() {
    int n = 0;
    int h = 0;
    int v = 0;
    scanf("%d %d %d",&n, &h, &v);

    int height = 4;
    const int a = h * v;
    const int b = h * (n - v);
    const int c = (n - h) * v;
    const int d = (n- h) * (n - v);

    printf("%d\n", std::max(std::max(a, b), std::max(c, d)) * 4);
}
