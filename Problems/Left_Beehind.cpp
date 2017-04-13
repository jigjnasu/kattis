/*
Kattis.com
Problem Left Beehind.
Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
Date: 13/04/2017
*/

#include <cstdio>

int main() {
    while (1) {
        int sweet = 0;
        int sour = 0;

        scanf("%d %d", &sweet, &sour);

        if (sweet == 0 && sour == 0)
            break;

        if (sweet + sour == 13)
            printf("Never speak again.\n");
        else if (sweet > sour)
            printf("To the convention.\n");
        else if (sweet < sour)
            printf("Left beehind.\n");
        else
            printf("Undecided.\n");
    }

    return 0;
}
