/*
Problem: Implement Queue using Stacks
LeetCode: 232

push(1)
push(2)
peek()  -> 1
pop()   -> 1
empty() -> false
*/

#include <stack>
using namespace std;

class MyQueue {
private:
    stack<int> input;
    stack<int> output;

    void transfer() {
        if(output.empty()) {
            while(!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
    }

public:
    MyQueue() {
    }

    void push(int x) {
        input.push(x);
    }

    int pop() {
        transfer();
        int result = output.top();
        output.pop();
        return result;
    }

    int peek() {
        transfer();
        return output.top();
    }

    bool empty() {
        return input.empty() && output.empty();
    }
};
