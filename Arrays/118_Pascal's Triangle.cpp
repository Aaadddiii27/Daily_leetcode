
/*
Problem: Pascal's Triangle
LeetCode: 118

Question:
Given numRows, generate the first numRows
of Pascal's Triangle.

Example:
Input: numRows = 5

Output:
[[1], [1,1], [1,2,1], [1,3,3,1],
 [1,4,6,4,1]]
*/

#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;

        for(int i = 0; i < numRows; i++) {
            vector<int> row(i + 1, 1);

            for(int j = 1; j < i; j++) {
                row[j] = result[i - 1][j - 1]
                       + result[i - 1][j];
            }

            result.push_back(row);
        }

        return result;
    }
};
