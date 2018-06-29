/*
  Kattis.com
  Problem Flow Shop.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 08/12/2017
*/

#include <cstdio>
#include <vector>

inline int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);

    std::vector<std::vector<int>> mat;
    for (int i = 0; i <=n; ++i) {
        std::vector<int> t(m + 1, 0);
        mat.push_back(t);
    }

    for (int r = 1; r <= n; ++r) {
        for (int c = 1; c <= m; ++c) {
            int a = 0;
            scanf("%d", &a);

            mat[r][c] = a + max(mat[r][c - 1], mat[r - 1][c]);
        }

        printf("%d ", mat[r][m]);
    }

    printf("\n");

    return 0;
}
