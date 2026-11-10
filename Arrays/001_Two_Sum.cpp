
/*
Problem: Two Sum
LeetCode: 1

Question:
Given an array of integers nums and an integer target,
return the indices of the two numbers whose sum equals target.

Example:
Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1]

Explanation:
nums[0] + nums[1] = 2 + 7 = 9
*/

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
