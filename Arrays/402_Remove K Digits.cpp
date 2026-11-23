/*
Problem: Remove K Digits
LeetCode: 402

Input: num = "1432219", k = 3
Output: "1219"

Input: num = "10200", k = 1
Output: "200"

Input: num = "10", k = 2
Output: "0"
*/

#include <string>
using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        string st = "";

        for(int i = 0; i < num.length(); i++) {
            while(!st.empty() && k > 0 &&
                  st.back() > num[i]) {
                st.pop_back();
                k--;
            }

            st.push_back(num[i]);
        }

        while(k > 0 && !st.empty()) {
            st.pop_back();
            k--;
        }

        int i = 0;

        while(i < st.length() && st[i] == '0') {
            i++;
        }

        string result = st.substr(i);

        if(result.empty()) {
            return "0";
        }

        return result;
    }
};
