
/*
Problem: Move Zeroes
LeetCode: 283

Question:
Given an integer array nums, move all zeroes to the
end while maintaining the relative order of non-zero
elements. Modify the array in-place.

Example 1:
Input: nums = [0, 1, 0, 3, 12]
Output: [1, 3, 12, 0, 0]

Example 2:
Input: nums = [0]
Output: [0]

Explanation:
All non-zero elements are moved to the beginning,
while zeroes are shifted to the end.
*/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                swap(nums[i], nums[index]);
                index++;
            }
        }
    }
};
