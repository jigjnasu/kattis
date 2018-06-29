/*
  Kattis.com
  Problem Popular Vote.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 17/04/2017
*/

#include <cstdio>
#include <vector>
#include <string>

int main() {
    int t = 0;
    scanf("%d", &t);

    while (t--) {
        int candidates = 0;
        int max_votes = 0;
        int winner = 0;
        int total = 0;

        int n = 0;
        scanf("%d", &n);
        
        for (int i = 1; i <= n; ++i) {
            int votes = 0;
            scanf("%d", &votes);

            if (votes > max_votes) {
                candidates = 1;
                winner = i;
                max_votes = votes;
            } else if (votes == max_votes) {
                ++candidates;
            }

            total += votes;
        }

        if (candidates > 1) {
            printf("no winner\n");
        } else {
            std::string type = "minority";
            if (max_votes > total / 2)
                type = "majority";
            printf("%s winner %d\n", type.c_str(), winner);
        }
    }

    return 0;
}
