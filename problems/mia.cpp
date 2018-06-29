/*
  Kattis.com
  Problem Mia.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 06/12/2017
*/

#include <cstdio>

/*
  Rank 1 -- 12 or 21 score 21
  Rank 2 -- same 11, 22, 33, 44, 55, 66
  score highest to lowest
  66 > 55 > 44 > 33 > 22 > 11
  Rank 3 -- all numbers
*/

struct Status {
    Status() : rank(0), score(0) {}
    Status(int r, int s) : rank(r), score(s) {}

    int rank;
    int score;
};

inline int score(int a, int b) {
    if (a > b)
        return a * 10 + b;
    else
        return b * 10 + a;
}

inline int rank(int a, int b) {
    if (score(a, b) == 21)
        return 1;
    else if (a == b)
        return 2;
    else
        return 3;
}

inline int winner(const Status& s1, const Status& s2) {
    int w = -1;

    if (s1.rank > s2.rank)
        w = 2;
    else if (s1.rank < s2.rank)
        w = 1;
    else if (s1.rank == s2.rank)
        if (s1.score > s2.score)
            w = 1;
        else if (s1.score < s2.score)
            w = 2;
        else
            w = 0;

    return w;
}

int main() {
    while (1) {
        int a = 0;
        int b = 0;

        int p = 0;
        int q = 0;

        scanf("%d %d %d %d", &a, &b, &p, &q);

        if (!a && !b && !p && !q)
            break;

        Status s1(rank(a, b), score(a, b));
        Status s2(rank(p, q), score(p, q));

        const int w = winner(s1, s2);
        if (w == 0)
            printf("Tie.\n");
        else
            printf("Player %d wins.\n", w);
    }

    return 0;
}

