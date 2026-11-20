/*
Problem: Next Greater Element I
LeetCode: 496

Input:
nums1 = [4,1,2]
nums2 = [1,3,4,2]

Output: [-1,3,-1]
*/

#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1,
                                   vector<int>& nums2) {
        unordered_map<int, int> nextGreater;
        stack<int> st;

        for(int i = 0; i < nums2.size(); i++) {
            while(!st.empty() && st.top() < nums2[i]) {
                nextGreater[st.top()] = nums2[i];
                st.pop();
            }

            st.push(nums2[i]);
        }

        while(!st.empty()) {
            nextGreater[st.top()] = -1;
            st.pop();
        }

        vector<int> result;

        for(int i = 0; i < nums1.size(); i++) {
            result.push_back(nextGreater[nums1[i]]);
        }

        return result;
    }
};
