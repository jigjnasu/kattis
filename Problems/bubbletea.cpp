/*
  Kattis.com
  Problem Delicious Bubble Tea.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 09/11/2017
*/

#include <cstdio>
#include <vector>

const int MAX = 1e+9 + 1;

int main() {
    int min = MAX;
    int n = 0;
    scanf("%d", &n);

    std::vector<int> tea;
    while (n--) {
        int value = 0;
        scanf("%d", &value);
        tea.push_back(value);
    }

    int m = 0;
    scanf("%d", &m);

    std::vector<int> toppings;
    while (m--) {
        int value = 0;
        scanf("%d", &value);
        toppings.push_back(value);
    }

    for (std::size_t i = 0; i < tea.size(); ++i) {
        int n = 0;
        scanf("%d", &n);

        while (n--) {
            int value = 0;
            scanf("%d", &value);
            if (tea[i] + toppings[value - 1] < min)
                min = tea[i] + toppings[value - 1];
        }
    }

    int money = 0;
    scanf("%d", &money);
    const int students = (money / min) - 1;
    printf("%d\n", students < 0 ? 0 : students);
    return 0;
}
