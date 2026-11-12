
/*
Problem: Majority Element
LeetCode: 169

Question:
Given an array nums of size n, return the element
that appears more than n/2 times.

The majority element is guaranteed to exist.

Example 1:
Input: nums = [3, 2, 3]
Output: 3

Example 2:
Input: nums = [2, 2, 1, 1, 1, 2, 2]
Output: 2

Explanation:
The majority element appears more than n/2 times.
Boyer-Moore Voting Algorithm is used to find it
in linear time and constant extra space.
*/

#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(count == 0) {
                candidate = nums[i];
            }

            if(nums[i] == candidate) {
                count++;
            } else {
                count--;
            }
        }

        return candidate;
    }
};
