/*
Problem: Ransom Note
LeetCode: 383

Input: ransomNote = "a", magazine = "b"
Output: false

Input: ransomNote = "aa", magazine = "aab"
Output: true
*/

#include <string>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26] = {0};

        for(int i = 0; i < magazine.length(); i++) {
            freq[magazine[i] - 'a']++;
        }

        for(int i = 0; i < ransomNote.length(); i++) {
            int index = ransomNote[i] - 'a';

            if(freq[index] == 0) {
                return false;
            }

            freq[index]--;
        }

        return true;
    }
};
