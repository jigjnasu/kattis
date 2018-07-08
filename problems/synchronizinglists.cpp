/*
  Kattis.com
  Problem Synchronizing Lists.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 14/04/2017
*/

#include <cstdio>
#include <vector>
#include <cstdlib>
#include <random>

void print(const std::vector<int>& V) {
    printf("-------------------------------------------------\n");
    for (std::size_t i = 0; i < V.size(); ++i)
        printf("%d ", V[i]);
    printf("\n-------------------------------------------------\n");
}

inline int random(int min, int max) {
    std::random_device rd;
    std::uniform_int_distribution<> dt(min, max);
    return dt(rd);
}

inline void swap(int& a, int& b) {
    const int t = a;
    a = b;
    b = t;
}

int partition(std::vector<int>& V, int start, int end) {
    const int index = random(start, end);
    swap(V[index], V[end]);

    int i = start;
    for (int j = start; j < end; ++j) {
        if (V[j] <= V[end]) {
            swap(V[i], V[j]);
            ++i;
        }
    }

    swap(V[i], V[end]);
    return i;
}

void qsort(std::vector<int>& V, int start, int end) {
    if (start < end) {
        const int mid = partition(V, start, end);
        qsort(V, start, mid - 1);
        qsort(V, mid + 1, end);
    }
}

int pos(const std::vector<int>& V, int index) {
    int p = 0;
    for (std::size_t i = 0; i < V.size(); ++i)
        if (V[i] < V[index])
            ++p;

    return p;
}

int main() {
    while (1) {
        int n = 0;
        scanf("%d", &n);
        if (n == 0)
            break;

        std::vector<int> list_a;
        std::vector<int> list_b;
        for (int i = 0; i < n; ++i) {
            int value = 0;
            scanf("%d", &value);
            list_a.push_back(value);
        }

        for (int i = 0; i < n; ++i) {
            int value = 0;
            scanf("%d", &value);
            list_b.push_back(value);
        }

        qsort(list_b, 0, list_b.size() - 1);
        for (std::size_t i = 0; i < list_a.size(); ++i)
            printf("%d\n", list_b[pos(list_a, i)]);
        printf("\n");
    }

    return 0;
}
