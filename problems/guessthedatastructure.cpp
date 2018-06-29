/*
  Kattis.com
  Problem I Can Guess the Data Structure!.
  Solution by Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 20/07/2017
 */


#include <cstdio>
#include <stack>
#include <queue>

int main() {
    int n = 0;
    while (scanf("%d", &n) != EOF) {
        std::stack<int> my_stack;
        std::queue<int> my_queue;
        std::priority_queue<int> my_pq;

        bool is_stack = true;
        bool is_queue = true;
        bool is_pq = true;

        while (n--) {
            int a = 0;
            int b = 0;
            scanf("%d %d", &a, &b);

            if (a == 1) {
                my_stack.push(b);
                my_queue.push(b);
                my_pq.push(b);
            } else  {
                if (is_stack) {
                    if (my_stack.empty() || b != my_stack.top())
                        is_stack = false;
                    else
                        my_stack.pop();
                }

                if (is_queue) {
                    if (my_queue.empty() || b != my_queue.front())
                        is_queue = false;
                    else
                        my_queue.pop();
                }

                if (is_pq) {
                    if (my_pq.empty() || b != my_pq.top())
                        is_pq = false;
                    else
                        my_pq.pop();
                }
            }
        }

        if ((is_stack && is_queue) || (is_queue && is_pq) || (is_stack && is_pq))
            printf("not sure\n");
        else if (!is_stack && !is_queue && !is_pq)
            printf("impossible\n");
        else if (is_stack)
            printf("stack\n");
        else if (is_queue)
            printf("queue\n");
        else if (is_pq)
            printf("priority queue\n");
    }

    return 0;
}
