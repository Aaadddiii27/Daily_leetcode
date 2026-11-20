/*
Problem: Backspace String Compare
LeetCode: 844

Input:
s = "ab#c"
t = "ad#c"

Output: true

Input:
s = "a#c"
t = "b"

Output: false
*/

#include <string>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i = static_cast<int>(s.size()) - 1;
        int j = static_cast<int>(t.size()) - 1;

        while(i >= 0 || j >= 0) {
            int skipS = 0;
            int skipT = 0;

            while(i >= 0) {
                if(s[i] == '#') {
                    skipS++;
                    i--;
                }
                else if(skipS > 0) {
                    skipS--;
                    i--;
                }
                else {
                    break;
                }
            }

            while(j >= 0) {
                if(t[j] == '#') {
                    skipT++;
                    j--;
                }
                else if(skipT > 0) {
                    skipT--;
                    j--;
                }
                else {
                    break;
                }
            }

            if(i >= 0 && j >= 0 && s[i] != t[j]) {
                return false;
            }

            if((i >= 0) != (j >= 0)) {
                return false;
            }

            i--;
            j--;
        }

        return true;
    }
};
