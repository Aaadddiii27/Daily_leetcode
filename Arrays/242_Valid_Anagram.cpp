
/*
Problem: Valid Anagram
LeetCode: 242

Question:
Given two strings s and t, return true if t is an
anagram of s, otherwise return false.

Example 1:
Input: s = "anagram", t = "nagaram"
Output: true

Explanation:
Both strings contain the same characters with the
same frequencies.

Example 2:
Input: s = "rat", t = "car"
Output: false

Explanation:
The characters and their frequencies are different.
*/

#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) {
            return false;
        }

        int freq[26] = {0};

        for(int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for(int i = 0; i < 26; i++) {
            if(freq[i] != 0) {
                return false;
            }
        }

        return true;
    }
};
