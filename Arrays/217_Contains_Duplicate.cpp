
/*
Problem: Contains Duplicate
LeetCode: 217

Question:
Given an integer array nums, return true if any value
appears at least twice. Otherwise, return false.

Example 1:
Input: nums = [1, 2, 3, 1]
Output: true

Explanation:
The number 1 appears twice.

Example 2:
Input: nums = [1, 2, 3, 4]
Output: false

Explanation:
All elements are unique.
*/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i - 1]) {
                return true;
            }
        }

        return false;
    }
};
