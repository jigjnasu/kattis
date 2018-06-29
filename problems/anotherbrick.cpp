/*
  Kattis.com
  Problem Another Brick in the Wall.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 27/06/2017
*/

#include <cstdio>

int main() {
    int h = 0;
    int w = 0;
    int b = 0;
    scanf("%d %d %d", &h, &w, &b);

    bool complete = false;

    int width = 0;
    int height = 0;
    while (b--) {
        int s = 0;
        scanf("%d", &s);

        if (height < h) {
            width += s;
            if (width == w) {
                ++height;
                width = 0;
            } else if (width > w) {
                height = h + 1;
            }

            if (height == h)
                complete = true;
        }
    }

    if (complete)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
