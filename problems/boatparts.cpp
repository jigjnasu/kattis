/*
  Kattis.com
  Problem Boat Parts
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 04/05/2018
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int p = 0;
    int n = 0;
    cin >> p >> n;
    cin.ignore();

    set<string> queue;
    int r = 0;
    for (int i = 1; i <= n; ++i) {
        string w;
        getline(cin, w);
        queue.insert(w);
        if (!r && queue.size() == static_cast<int>(p))
            r = i;
    }

    if (r)
        cout << r << endl;
    else
        cout << "paradox avoided" << endl;

    return 0;
}
