/*
  Kattis.com
  Problem Mjehuric.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 09/05/2017
*/

#include <cstdio>
#include <vector>

void swap(int& a, int& b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

bool sequence(const std::vector<int>& list) {
    for (std::size_t i = 0; i < list.size() - 1; ++i)
        if (list[i] + 1 != list[i + 1])
            return false;
    return true;
}

void print(const std::vector<int>& list) {
    for (std::size_t i = 0; i < list.size(); ++i)
        printf("%d ", list[i]);
    printf("\n");
}

int main() {
    std::vector<int> list;

    for (int i = 0; i < 5; ++i) {
        int n = 0;
        scanf("%d", &n);
        list.push_back(n);
    }

    while (sequence(list) == false) {
        for (std::size_t i = 0; i < list.size() - 1; ++i) {
            if (list[i] > list[i + 1]) {
                swap(list[i], list[i +  1]);
                print(list);
            }
        }
    }

    return 0;
}
