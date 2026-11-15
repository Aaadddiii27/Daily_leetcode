
/*
Problem: Best Time to Buy and Sell Stock
LeetCode: 121

Question:
Find the maximum profit by buying once and selling
later. Return 0 if no profit is possible.

Example 1:
Input: prices = [7, 1, 5, 3, 6, 4]
Output: 5

Example 2:
Input: prices = [7, 6, 4, 3, 1]
Output: 0

Explanation:
Track the minimum buying price and maximum profit.
*/

#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;

        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] < buy) {
                buy = prices[i];
            }
            else if(prices[i] - buy > profit) {
                profit = prices[i] - buy;
            }
        }

        return profit;
    }
};
