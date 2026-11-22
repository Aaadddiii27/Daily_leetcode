/*
Problem: Min Stack
LeetCode: 155

push(-2)
push(0)
push(-3)
getMin() -> -3
pop()
top()    -> 0
getMin() -> -2
*/

#include <stack>
#include <utility>
#include <algorithm>
using namespace std;

class MinStack {
private:
    stack<pair<int, int>> st;

public:
    MinStack() {
    }

    void push(int val) {
        int minimum = val;

        if(!st.empty()) {
            minimum = min(val, st.top().second);
        }

        st.push({val, minimum});
    }

    void pop() {
        st.pop();
    }

    int top() {
        return st.top().first;
    }

    int getMin() {
        return st.top().second;
    }
};
