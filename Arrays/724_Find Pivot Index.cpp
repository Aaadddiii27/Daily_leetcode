
/*
Problem: Find Pivot Index
LeetCode: 724

Question:
Find the leftmost index where the sum of elements
on the left equals the sum of elements on the right.

Example:
Input: [1, 7, 3, 6, 5, 6]
Output: 3

Explanation:
Left sum = 11, Right sum = 11.
*/

#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        int leftSum = 0;

        for(int i = 0; i < nums.size(); i++) {
            totalSum += nums[i];
        }

        for(int i = 0; i < nums.size(); i++) {
            int rightSum = totalSum - leftSum - nums[i];

            if(leftSum == rightSum) {
                return i;
            }

            leftSum += nums[i];
        }

        return -1;
    }
};
