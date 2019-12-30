/*
  Kattis.com
  Problem Gerrymandering
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 31/12/2019
*/

#include <bits/stdc++.h>

struct District {
    int a;
    int b;

    District() : a(0), b(0) {}
};

int main() {
    int p = 0;
    int d = 0;
    scanf("%d %d",&p, &d);

    std::vector<District> votes;
    for (int i = 0; i < d; ++i) {
        District d;
        votes.push_back(d);
    }

    while (p--) {
        int district = 0;
        int a = 0;
        int b = 0;
        scanf("%d %d %d", &district, &a, &b);

        votes[district - 1].a += a;
        votes[district - 1].b += b;
    }

    int v = 0;
    int wa = 0;
    int wb = 0;
    for (std::size_t i = 0; i < votes.size(); ++i) {
        int wasted_a = 0;
        int wasted_b = 0;
        const int a = votes[i].a;
        const int b = votes[i].b;
        const char winner = a > b ? 'A' : 'B';

        if (a > b) {
            wasted_a = a - (((a + b) >> 1) + 1);
            wasted_b = b;
        } else {
            wasted_a = a;
            wasted_b = b - (((a + b) >> 1) + 1);
        }

        printf("%c %d %d\n", winner, wasted_a, wasted_b);

        v += a + b;
        wa += wasted_a;
        wb += wasted_b;
    }

    printf("%f\n", std::abs(wa - wb) / static_cast<float>(v));

    return 0;
}
