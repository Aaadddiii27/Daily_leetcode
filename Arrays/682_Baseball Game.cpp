/*
Problem: Baseball Game
LeetCode: 682

Input: ["5", "2", "C", "D", "+"]
Output: 30
*/

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> st;

        for(int i = 0; i < operations.size(); i++) {
            string op = operations[i];

            if(op == "C") {
                st.pop_back();
            }
            else if(op == "D") {
                st.push_back(2 * st.back());
            }
            else if(op == "+") {
                int n = st.size();
                st.push_back(st[n - 1] + st[n - 2]);
            }
            else {
                st.push_back(stoi(op));
            }
        }

        int total = 0;

        for(int i = 0; i < st.size(); i++) {
            total += st[i];
        }

        return total;
    }
};
