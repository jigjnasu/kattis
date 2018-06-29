/*
  Kattis.com
  Problem Above Average.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 22/11/2017
 */

#include <cstdio>
#include <vector>

int main() {
    int t = 0;
    scanf("%d", &t);

    while (t--) {
        int n = 0;
        scanf("%d", &n);

        int total = 0;
        std::vector<int> scores;
        while (n--) {
            int s = 0;
            scanf("%d", &s);
            scores.push_back(s);
            total += s;
        }

        const double avg = total / static_cast<int>(scores.size());
        int bright_students = 0;
        for (std::size_t i = 0; i < scores.size(); ++i)
            if (scores[i] > avg)
                ++bright_students;

        printf("%.3lf%\n", (bright_students / static_cast<double>(scores.size())) * 100);
    }

    return 0;
}

