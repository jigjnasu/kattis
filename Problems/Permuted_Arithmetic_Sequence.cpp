/*
  Kattis.com
  Problem Permuted Arithmetic Sequence.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 26/04/2017
 */

#include <cstdio>
#include <vector>
#include <algorithm>

bool is_same(const std::vector<int>& nums) {
    const int d = nums[1] - nums[0];
    for (std::size_t i = 2; i < nums.size(); ++i)
        if (d != nums[i] - nums[i - 1])
            return false;
    return true;
}

int main() {
    int t = 0;
    scanf("%d", &t);

    while (t--) {
        int n = 0;
        scanf("%d", &n);

        std::vector<int> nums;
        while (n--) {
            int v = 0;
            scanf("%d", &v);
            nums.push_back(v);
        }

        if (is_same(nums)) {
            printf("arithmetic\n");
        } else {
            std::sort(nums.begin(), nums.end());
            if (is_same(nums))
                printf("permuted arithmetic\n");
            else
                printf("non-arithmetic\n");
        }
        
    }

    return 0;
}
