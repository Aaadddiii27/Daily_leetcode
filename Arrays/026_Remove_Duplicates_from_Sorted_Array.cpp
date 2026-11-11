
/*
Problem: Remove Duplicates from Sorted Array
LeetCode: 26

Question:
Given a sorted integer array nums, remove duplicates
in-place so that each unique element appears only once.
Return the number of unique elements k.

Example 1:
Input: nums = [1, 1, 2]
Output: 2
Modified Array: [1, 2, _]

Example 2:
Input: nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
Output: 5
Modified Array: [0, 1, 2, 3, 4, _, _, _, _, _]
*/

#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) {
            return 0;
        }

        int i = 0;

        for(int j = 1; j < nums.size(); j++) {
            if(nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }

        return i + 1;
    }
};
