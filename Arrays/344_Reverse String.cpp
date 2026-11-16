
/*
Problem: Reverse String
LeetCode: 344

Input: ['h','e','l','l','o']
Output: ['o','l','l','e','h']
*/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;

        while(left < right) {
            swap(s[left], s[right]);

            left++;
            right--;
        }
    }
};
