/*
  Kattis.com
  Problem provinces and gold.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 08/12/2018
*/

#include <bits/stdc++.h>

int main() {
    int g = 0;
    int s = 0;
    int c = 0;
    scanf("%d %d %d", &g, &s, &c);

    const int sum = (3 * g) + (s << 1) + c;
    std::string v;
    std::string t;

    if (sum >= 8)
        v = "Province";
    else if (sum >= 5)
        v = "Duchy";
    else if (sum >= 2)
        v = "Estate";

    if (sum >= 6)
        t = "Gold";
    else if (sum >= 3)
        t = "Silver";
    else
        t = "Copper";

    if (v.size())
        printf("%s or %s\n", v.c_str(), t.c_str());
    else
        printf("Copper\n");

    return 0;
}
