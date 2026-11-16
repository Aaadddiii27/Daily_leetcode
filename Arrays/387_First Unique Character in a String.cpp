
/*
Problem: First Unique Character in a String
LeetCode: 387

Input: "leetcode"
Output: 0

Input: "loveleetcode"
Output: 2

Input: "aabb"
Output: -1
*/

#include <string>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26] = {0};

        for(int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
        }

        for(int i = 0; i < s.length(); i++) {
            if(freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};
