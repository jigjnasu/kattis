/*
  Kattis.com
  Problem Natjecanje.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 18/06/2017
*/

#include <cstdio>

int main() {
    int N[10] = {0};
    int S[10] = {0};
    int R[10] = {0};

    int n = 0;
    int s = 0;
    int r = 0;
    scanf("%d %d %d", &n, &s, &r);

    // Total number of Kyaks
    for (int i = 0; i < n; ++i)
        N[i] = i + 1;

    // Damaged Kyaks
    for (int i = 0; i < s; ++i) {
        int v = 0;
        scanf("%d", &v);
        S[v - 1] = 1;
    }

    // Reserved Kyaks
    for (int i = 0; i < r; ++i) {
        int v = 0;
        scanf("%d", &v);
        R[v - 1] = 1;
    }

    int total = s;
    for (int i = 0; i < n; ++i) {
        if (S[i]) {
            if (i > 0 && R[i - 1]) {
                --total;
                R[i - 1] = 0;
            } else if (i + 1 < n && R[i + 1]) {
                --total;
                R[i + 1] = 0;
            }
        }
    }

    printf("%d\n", total);

    return 0;
}
