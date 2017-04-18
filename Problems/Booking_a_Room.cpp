/*
  Kattis.com
  Problem Booking a Room.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 18/04/2017
*/

#include <cstdio>
#include <algorithm>
#include <vector>

int main() {
    int r = 0;
    int b = 0;
    std::vector<int> rooms;
    scanf("%d %d", &r, &b);

    if (b == 0) {
        printf("1\n");
        return 0;
    }

    for (int i = 0; i < b; ++i) {
        int room = 0;
        scanf("%d", &room);
        rooms.push_back(room);
    }

    std::sort(rooms.begin(), rooms.end());

    if (b < r) {
        int i = 1;
        int j = 0;
        while (i <= r && j < rooms.size()) {
            if (i++ != rooms[j++]) {
                printf("%d\n", i - 1);
                return 0;
            }
        }

        printf("%d\n", i);
        return 0;
    }
    
    printf("too late\n");

    return 0;
}
