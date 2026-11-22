/*
Problem: Next Greater Element II
LeetCode: 503

Input: [1,2,1]
Output: [2,-1,2]

Input: [3,8,4,1,2]
Output: [8,-1,8,2,3]
*/

#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();

        vector<int> result(n, -1);
        stack<int> st;

        for(int i = 0; i < 2 * n; i++) {
            int index = i % n;

            while(!st.empty() &&
                  nums[index] > nums[st.top()]) {

                result[st.top()] = nums[index];
                st.pop();
            }

            if(i < n) {
                st.push(index);
            }
        }

        return result;
    }
};
