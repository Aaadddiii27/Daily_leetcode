
/*
Problem: Plus One
LeetCode: 66

Question:
Given an array of digits representing a non-negative
integer, increment the integer by one and return the
resulting array of digits.

Example 1:
Input: nums = [1, 2, 3]
Output: [1, 2, 4]

Example 2:
Input: nums = [4, 3, 9]
Output: [4, 4, 0]

Example 3:
Input: nums = [9, 9, 9]
Output: [1, 0, 0, 0]

Explanation:
Start from the last digit. If it is 9, make it 0
and carry 1 to the previous digit. If it is less
than 9, increment it and return the array.
*/

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size() - 1; i >= 0; i--) {
            if(digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};
