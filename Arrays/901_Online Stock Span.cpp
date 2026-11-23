/*
Problem: Online Stock Span
LeetCode: 901

Input: [100,80,60,70,60,75,85]
Output: [1,1,1,2,1,4,6]
*/

#include <stack>
#include <utility>
using namespace std;

class StockSpanner {
private:
    stack<pair<int, int>> st;

public:
    StockSpanner() {
    }

    int next(int price) {
        int span = 1;

        while(!st.empty() && st.top().first <= price) {
            span += st.top().second;
            st.pop();
        }

        st.push({price, span});

        return span;
    }
};
