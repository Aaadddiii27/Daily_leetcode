
/*
Problem: Remove Element
LeetCode: 27

Question:
Given an integer array nums and an integer val,
remove all occurrences of val in-place.
Return the number of elements not equal to val.

Example 1:
Input: nums = [3, 2, 2, 3], val = 3
Output: 2
Modified Array: [2, 2, _, _]

Example 2:
Input: nums = [0, 1, 2, 2, 3, 0, 4, 2], val = 2
Output: 5
Modified Array: [0, 1, 3, 0, 4, _, _, _]

Explanation:
Use a pointer to place all valid elements
at the beginning of the array.
*/

#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};
