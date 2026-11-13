
/*
Problem: Find the Difference
LeetCode: 389

Question:
Given two strings s and t, string t is created by
shuffling string s and adding one extra character.
Find and return the extra character.

Example 1:
Input: s = "abcd", t = "abcde"
Output: "e"

Example 2:
Input: s = "", t = "y"
Output: "y"

Explanation:
XOR cancels out matching characters.
The extra character remains.
*/

#include <string>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        char result = 0;

        for(int i = 0; i < s.length(); i++) {
            result = result ^ s[i];
        }

        for(int i = 0; i < t.length(); i++) {
            result = result ^ t[i];
        }

        return result;
    }
};
