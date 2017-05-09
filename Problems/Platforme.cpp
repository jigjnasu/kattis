/*
  Kattis.com
  Problem Platforme.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 09/05/2017
*/

#include <cstdio>
#include <vector>

// This is the platform structure
struct Platform {
    std::size_t h; // height of the platform
    std::size_t l; // left  position of the platform
    std::size_t r; // right position of the platform
    Platform() : h(0), l(0), r(0) {}
    Platform(std::size_t a, std::size_t b, std::size_t c) : h(a), l(b), r(c) {}

    Platform(const Platform& rhs) {
        h = rhs.h;
        l = rhs.l;
        r = rhs.r;
    }

    Platform& operator = (const Platform& rhs) {
        h = rhs.h;
        l = rhs.l;
        r = rhs.r;
        
        return *this;
    }
    
    ~Platform() {}
};

// Merge Sort implementation
void merge(std::vector<Platform>& list, int start, int mid, int end) {
    std::vector<Platform> left;
    std::vector<Platform> right;

    for (int i = start; i <= mid; ++i)
        left.push_back(list[i]);
    for (int i = mid + 1; i <= end; ++i)
        right.push_back(list[i]);

    std::size_t left_iter = 0;
    std::size_t right_iter = 0;
    std::size_t iter = start;

    while (left_iter < left.size() && right_iter < right.size()) {
        if (left[left_iter].h > right[right_iter].h)
            list[iter++] = left[left_iter++];
        else
            list[iter++] = right[right_iter++];
    }

    while (left_iter < left.size())
        list[iter++] = left[left_iter++];
    while (right_iter < right.size())
        list[iter++] = right[right_iter++];
}

// Merge Sort implementation
void merge_sort(std::vector<Platform>& list, int start, int end) {
    if (start < end) {
        const int mid = (start + end) >> 1;
        merge_sort(list, start, mid);
        merge_sort(list, mid + 1, end);
        merge(list, start, mid, end);
    }
}

int left(const std::vector<Platform>& list, std::size_t pos) {
    const Platform P = list[pos];
    for (std::size_t i = pos + 1; i < list.size(); ++i) {
        if (P.l >= list[i].l &&
            P.l <  list[i].r)
            return list[i].h;
    }

    return 0;
}

int right(const std::vector<Platform>& list, std::size_t pos) {
    const Platform P = list[pos];
    for (std::size_t i = pos + 1; i < list.size(); ++i) {
        if (P.r > list[i].l &&
            P.r <= list[i].r)
            return list[i].h;
    }

    return 0;
}

int main() {
    std::size_t n = 0;
    scanf("%lu", &n);

    std::size_t total = 0;
    std::vector<Platform> list;
    while (n--) {
        std::size_t h = 0;
        std::size_t l = 0;
        std::size_t r = 0;
        scanf("%lu %lu %lu", &h, &l, &r);
        
        list.push_back(Platform(h, l, r));
        total += 2 * h;
    }

    merge_sort(list, 0, list.size() - 1);

    for (std::size_t i = 0; i < list.size() - 1; ++i) {
        total -= left(list, i);
        total -= right(list, i);
    }

    printf("%lu\n", total);

    return 0;
}
