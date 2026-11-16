
/*
Problem: Find All Numbers Disappeared in an Array
LeetCode: 448

Question:
Find all numbers in the range [1, n] that are missing
from the given array of size n.

Example 1:
Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]

Example 2:
Input: nums = [1,1]
Output: [2]

Explanation:
Use negative marking to identify which numbers
are present in the array.
*/

#include <vector>
#include <cstdlib>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            int index = abs(nums[i]) - 1;

            if(nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }

        vector<int> result;

        for(int i = 0; i < n; i++) {
            if(nums[i] > 0) {
                result.push_back(i + 1);
            }
        }

        return result;
    }
};
