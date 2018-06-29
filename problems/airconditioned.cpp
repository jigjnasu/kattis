/*
  Kattis.com
  Problem Air Conditioned Minions.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 19/06/2017
*/

#include <cstdio>
#include <vector>

struct Room {
    Room() : lower(0), upper(0) {}
    Room(int l, int u) : lower(l), upper(u) {}
    Room(const Room& rhs) {
        lower = rhs.lower;
        upper = rhs.upper;
    }

    Room& operator = (const Room& rhs) {
        lower = rhs.lower;
        upper = rhs.upper;
        return *this;
    }

    int lower;
    int upper;
};

void merge(std::vector<Room>& rooms, int start, int mid, int end) {
    std::vector<Room> left;
    for (int i = start; i <= mid; ++i)
        left.push_back(rooms[i]);

    std::vector<Room> right;
    for (int i = mid + 1; i <= end; ++i)
        right.push_back(rooms[i]);

    int left_iter = 0;
    int right_iter = 0;
    int iter = start;

    while (left_iter < static_cast<int>(left.size()) &&
           right_iter < static_cast<int>(right.size())) {
        if (left[left_iter].upper < right[right_iter].upper)
            rooms[iter++] = left[left_iter++];
        else
            rooms[iter++] = right[right_iter++];
    }

    while (left_iter < static_cast<int>(left.size()))
        rooms[iter++] = left[left_iter++];

    while (right_iter < static_cast<int>(right.size()))
        rooms[iter++] = right[right_iter++];
}

void merge_sort(std::vector<Room>& rooms, int start, int end) {
    if (start < end) {
        const int mid = (start + end) >> 1;
        merge_sort(rooms, start, mid);
        merge_sort(rooms, mid + 1, end);
        merge(rooms, start, mid, end);
    }
}

int main() {
    std::vector<Room> rooms;
    int n = 0;
    scanf("%d", &n);

    while (n--) {
        int l = 0;
        int u = 0;
        scanf("%d %d", &l, &u);
        rooms.push_back(Room(l, u));
    }

    merge_sort(rooms, 0, rooms.size() - 1);

    int count = 1;
    int limit = rooms[0].upper;
    for (std::size_t i = 1; i < rooms.size(); ++i) {
        if (rooms[i].lower > limit) {
            limit = rooms[i].upper;
            ++count;
        }
    }

    printf("%d\n", count);

    return 0;
}
