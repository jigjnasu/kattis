/*
  Kattis.com
  Problem Datum.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 15/04/2017
*/

#include <cstdio>
#include <string>
#include <vector>

const std::vector<int> months = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const std::vector<std::string> days = {"Thursday",
                                       "Friday",
                                       "Saturday",
                                       "Sunday",
                                       "Monday",
                                       "Tuesday",
                                       "Wednesday"};

int main() {
    int d = 0;
    int m = 0;
    scanf("%d %d", &d, &m);

    int n = 0;
    for (int i = 0; i < m - 1; ++i)
        n += months[i];
    n += d;

    --n;
    printf("%s\n", days[n % 7].c_str());
}
