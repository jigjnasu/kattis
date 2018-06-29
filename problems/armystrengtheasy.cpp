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
        int a = 0;
        int b = 0;
        scanf("%d %d", &a, &b);

        priority_queue<int, vector<int>, greater<int> > ng;
        while (a--) {
            int e = 0;
            scanf("%d", &e);
            ng.push(e);
        }

        priority_queue<int, vector<int>, greater<int> > nm;
        while (b--) {
            int e = 0;
            scanf("%d", &e);
            nm.push(e);
        }

        while (ng.empty() == false &&
               nm.empty() == false) {
            if (nm.top() <= ng.top())
                nm.pop();
            else
                ng.pop();
        }

        printf("%s\n", ng.empty() ? "MechaGodzilla" : "Godzilla");
    }

    return 0;
}
