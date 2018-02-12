/*
  Kattis.com
  Problem Bounding Robots.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: Feb 12th, 2018
 */

#include <bits/stdc++.h>

struct Pos {
    Pos() : x(0), y(0) {}

    int x;
    int y;
};

inline int min(int a, int b) {
    return a < b ? a : b;
}

inline int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    while (1) {
        Pos room;
        int w = 0;
        int h = 0;
        scanf("%d %d", &room.x, &room.y);
        if (!room.x && !room.y)
            break;

        int n = 0;
        scanf("%d", &n);

        Pos robot;
        Pos actual;

        while (n--) {
            char c[2] = {0};
            int  d;
            scanf("%s %d", &c, &d);

            switch (c[0]) {
            case 'u': {
                robot.y += d;
                actual.y = min(room.y - 1, actual.y + d);
            }
                break;

            case 'd': {
                robot.y -= d;
                actual.y = max(0, actual.y - d);
            }
                break;

            case 'r': {
                robot.x += d;
                actual.x = min(room.x - 1, actual.x + d);
            }
                break;

            case 'l': {
                robot.x -= d;
                actual.x = max(0, actual.x - d);
            }
                break;

            default: break;
            }
        }

        printf("Robot thinks %d %d\n", robot.x, robot.y);
        printf("Actually at %d %d\n", actual.x, actual.y);
    }

    return 0;
}
