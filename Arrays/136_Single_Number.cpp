
/*
Problem: Single Number
LeetCode: 136

Question:
Given a non-empty integer array nums, every element
appears exactly twice except for one element.
Find and return that single element.

Example 1:
Input: nums = [2, 2, 1]
Output: 1

Example 2:
Input: nums = [4, 1, 2, 1, 2]
Output: 4

Example 3:
Input: nums = [1]
Output: 1

Explanation:
XOR cancels out duplicate numbers because a ^ a = 0.
The number appearing only once remains.
*/

#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;

        for(int i = 0; i < nums.size(); i++) {
            result = result ^ nums[i];
        }

        return result;
    }
};
