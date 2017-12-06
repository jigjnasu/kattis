/*
  Kattis.com
  Problem Get to Work.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 06/12/2017
*/

#include <cstdio>
#include <vector>
#include <algorithm>

struct Town {
    Town() : employees(0) {}

    void sort() {
        std::sort(drivers.begin(), drivers.end(), [] (int a, int b) -> bool {
                return a > b;
            });
    }

    int employees;
    std::vector<int> drivers;
};

int get_cars(int t, const std::vector<int>& drivers, int& people) {
    int cars = 0;
    std::size_t i = 0;
    while (t > 0 && i < drivers.size()) {
        ++cars;
        if (t < drivers[i])
            people += t;
        else
            people += drivers[i];
        t -= drivers[i++];
    }

    return cars;
}

int main() {
    int c = 0;
    scanf("%d", &c);
    for (int z = 1; z <= c; ++z) {
        int n = 0;
        int t = 0;
        scanf("%d %d", &n, &t);

        int e = 0;
        scanf("%d", &e);

        std::vector<Town> manager;
        for (int i = 0; i < n; ++i)
            manager.push_back(Town());

        for (int i = 0; i < e; ++i) {
            int h = 0;
            int p = 0;
            scanf("%d %d", &h, &p);

            ++manager[h - 1].employees;
            if (h != t && p)
                manager[h - 1].drivers.push_back(p);
        }

        std::vector<int> cars;
        int commute = 0;
        for (std::size_t i = 0; i < manager.size(); ++i) {
            if (i + 1 == t) {
                commute += manager[i].employees;
                cars.push_back(0);
            } else {
                int people = 0;

                manager[i].sort();
                cars.push_back(get_cars(manager[i].employees, manager[i].drivers, people));
                commute += people;
            }
        }

        if (commute == e) {
            printf("Case #%d: ", z);
            for (std::size_t i = 0; i < cars.size(); ++i)
                printf("%d ", cars[i]);
            printf("\n");
        } else {
            printf("Case #%d: IMPOSSIBLE\n", z);   
        }
    }

    return 0;
}


