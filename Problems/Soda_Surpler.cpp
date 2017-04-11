/*
Kattis.com
Problem Soda Surpler.
Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
Date: 11/04/2017
*/

#include <cstdio>

int main() {
    int e = 0;
    int f = 0;
    int c = 0;

    scanf("%d %d %d", &e, &f, &c);

    int drinks = 0;
    int bottles = e + f;

    while (bottles >= c) {
        drinks += bottles / c;
        bottles = bottles / c + bottles % c;
    }

    printf("%d\n", drinks);

    return 0;
}
