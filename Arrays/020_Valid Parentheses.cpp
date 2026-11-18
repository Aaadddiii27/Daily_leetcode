
/*
Problem: Valid Parentheses
LeetCode: 20

Input: "()[]{}"
Output: true

Input: "(]"
Output: false

Input: "([)]"
Output: false
*/

#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if(ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            else {
                if(st.empty()) {
                    return false;
                }

                char top = st.top();
                st.pop();

                if((ch == ')' && top != '(') ||
                   (ch == '}' && top != '{') ||
                   (ch == ']' && top != '[')) {
                    return false;
                }
            }
        }

        return st.empty();
    }
};
