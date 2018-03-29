/*
  Kattis.com
  Problem To Lower.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 29/03/2018
 */

#include <bits/stdc++.h>

using namespace std;

bool solve(const string& s) {
    for (size_t i = 1; i < s.size(); ++i)
        if (s[i] >= 'A' && s[i] <= 'Z')
            return false;

    return true;
}

int main() {
    int p = 0;
    int t = 0;
    cin >> p >> t;
    cin.ignore();

    int count = 0;
    for (int i = 0; i < p; ++i) {
        bool status = true;
        for (int j = 0; j < t; ++j) {
            string s;
            getline(cin, s);
            status &= solve(s);
        }

        if (status)
            ++count;
    }

    printf("%d\n", count);

    return 0;
}
