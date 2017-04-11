/*
Kattis.com
Problem Height Ordering.
Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
Date: 10/04/2017
*/

#include <cstdio>
#include <vector>

int main() {
    int n = 0;
    scanf("%d", &n);

    while (n--) {
        std::vector<int> list;
        int push = 0;

        int iter = 0;
        scanf("%d", &iter);

        for (int i = 0; i < 20; ++i) {
            int height = 0;
            scanf("%d", &height);

            for (std::size_t j = 0; j < list.size(); ++j)
                if (list[j] > height)
                    ++push;

            list.push_back(height);
        }

        printf("%d %d\n", iter, push);
    }

    return 0;
}
