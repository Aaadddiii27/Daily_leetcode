/*
Problem: Daily Temperatures
LeetCode: 739

Input: [73,74,75,71,69,72,76,73]
Output: [1,1,4,2,1,1,0,0]
*/

#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();

        vector<int> result(n, 0);
        stack<int> st;

        for(int i = 0; i < n; i++) {
            while(!st.empty() &&
                  temperatures[i] > temperatures[st.top()]) {

                int index = st.top();
                st.pop();

                result[index] = i - index;
            }

            st.push(i);
        }

        return result;
    }
};
