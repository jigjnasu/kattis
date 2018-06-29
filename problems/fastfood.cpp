/*
  Kattis.com
  Problem Fast Food Prizes.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 31/03/2018
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t = 0;
    scanf("%d", &t);

    while (t--) {
        int n = 0;
        int m = 0;
        scanf("%d %d", &n, &m);

        vector<vector<int>> s;
        while (n--) {
            int k = 0;
            scanf("%d", &k);
            ++k;
            vector<int> stickers;
            while (k--) {
                int e = 0;
                scanf("%d", &e);
                stickers.push_back(e);
            }

            s.push_back(stickers);
        }

        vector<int> coach(31, 0);
        for (int i = 1; i <= m; ++i) {
            int e = 0;
            scanf("%d", &e);
            coach[i] = e;
        }

        double prizes = 0.0f;
        for (size_t i = 0; i < s.size(); ++i) {
            int p = INT_MAX;
            size_t j = 0;
            while (j < s[i].size() - 1)
                p = min(p, coach[s[i][j++]]);
            prizes += (p * s[i][j]);
        }

        printf("%.0lf\n", prizes);
    }

    return 0;
}
