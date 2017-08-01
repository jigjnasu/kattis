#include <cstdio>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

std::string get(std::vector<int>& v) {
  std::sort(v.begin(), v.end());
  std::string n;
  for (std::size_t i = 0; i < v.size(); ++i)
    n += std::to_string(v[i]);
  return n;
}

int main() {
  std::map<std::string, int> dict;

  int n = 0;
  scanf("%d", &n);

  int students = 0;
  int popular = 1;
  while (n--) {
    std::vector<int> v;
    for (int i = 0; i < 5; ++i) {
      int c = 0;
      scanf("%d", &c);
      v.push_back(c);
    }

    const std::string course = get(v);
    ++dict[course];

    if (dict[course] == popular) {
      students += dict[course];
    } else if (dict[course] > popular) {
      popular = dict[course];
      students = dict[course];
    }
  }

  printf("%d\n", students);

  return 0;
}
