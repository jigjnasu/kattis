/*
  Kattis.com
  Problem Radio Commercials.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 18/04/2017
 */

#include <cstdio>
#include <vector>

int max(int a, int b) {
    return a > b ? a : b;
}

int max_cross_subarray(const std::vector<int>& cost, int start, int mid, int end) {
    int left_sum = cost[mid];
    int sum = cost[mid];

    for (int i = mid - 1; i >= start; --i) {
        sum += cost[i];
        if (sum > left_sum)
            left_sum = sum;
    }

    int right_sum = cost[mid + 1];
    sum = cost[mid + 1];
    for (int i = mid + 2; i <= end; ++i) {
        sum += cost[i];
        if (sum > right_sum)
            right_sum = sum;
    }

    return left_sum + right_sum;
}

// Divide and conquer max sub array.
int max_subarray(const std::vector<int>& cost, int start, int end) {
    if (start == end) {
        return cost[start];
    } else {
        const int mid = (start + end) >> 1;
        int left_sum = max_subarray(cost, start, mid);
        int right_sum = max_subarray(cost, mid + 1, end);
        int cross_sum = max_cross_subarray(cost, start, mid, end);

        return max(left_sum, max(right_sum, cross_sum));
    }
}

int main() {
    int n = 0;
    int p = 0;
    scanf("%d %d", &n, &p);
    
    std::vector<int> cost;
    while (n--) {
        int listeners = 0;
        scanf("%d", &listeners);
        cost.push_back(listeners - p);
    }

    printf("%d\n", max_subarray(cost, 0, cost.size() - 1));

    return 0;
}
