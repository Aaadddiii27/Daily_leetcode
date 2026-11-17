
/*
Problem: Valid Perfect Square
LeetCode: 367

Input: 16
Output: true

Input: 14
Output: false

Input: 1
Output: true
*/

using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        long long left = 1;
        long long right = num;

        while(left <= right) {
            long long mid = left + (right - left) / 2;
            long long square = mid * mid;

            if(square == num) {
                return true;
            }
            else if(square < num) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return false;
    }
};
