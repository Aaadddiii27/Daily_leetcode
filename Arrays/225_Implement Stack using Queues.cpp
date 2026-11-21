/*
Problem: Implement Stack using Queues
LeetCode: 225

push(1)
push(2)
top()   -> 2
pop()   -> 2
empty() -> false
*/

#include <queue>
using namespace std;

class MyStack {
private:
    queue<int> q;

public:
    MyStack() {
    }

    void push(int x) {
        q.push(x);

        int size = q.size();

        for(int i = 0; i < size - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int result = q.front();
        q.pop();
        return result;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};
