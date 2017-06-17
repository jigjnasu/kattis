/*
  Kattis.com
  Problem Vauvau.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 06/06/2017
*/

#include <cstdio>

bool dog_is_aggressive(int n, int m, int v) {
    const int value = v % (n + m);
    if (value && value <= n)
        return true;
    else
        return false;
}

void print_dog(int a, int b, int c, int d, int v) {
    int dogs = 0;
    if (dog_is_aggressive(a, b, v))
        ++dogs;
    if (dog_is_aggressive(c, d, v))
        ++dogs;

    if (dogs == 0)
        printf("none\n");
    else if (dogs == 1)
        printf("one\n");
    else
        printf("both\n");
}

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int p = 0;
    int m = 0;
    int g = 0;
    scanf("%d %d %d", &p, &m, &g);

    print_dog(a, b, c, d, p);
    print_dog(a, b, c, d, m);
    print_dog(a, b, c, d, g);

    return 0;
} 
