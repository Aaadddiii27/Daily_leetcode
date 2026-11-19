/*
Problem: Word Pattern
LeetCode: 290

Input:
pattern = "abba"
s = "dog cat cat dog"
Output: true

Input:
pattern = "abba"
s = "dog cat cat fish"
Output: false
*/

#include <string>
#include <sstream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word;
        stringstream ss(s);

        while(ss >> word) {
            words.push_back(word);
        }

        if(pattern.length() != words.size()) {
            return false;
        }

        unordered_map<char, string> mapPattern;
        unordered_map<string, char> mapWord;

        for(int i = 0; i < pattern.length(); i++) {
            char ch = pattern[i];
            string w = words[i];

            if(mapPattern.find(ch) == mapPattern.end() &&
               mapWord.find(w) == mapWord.end()) {

                mapPattern[ch] = w;
                mapWord[w] = ch;
            }
            else if(mapPattern[ch] != w || mapWord[w] != ch) {
                return false;
            }
        }

        return true;
    }
};
