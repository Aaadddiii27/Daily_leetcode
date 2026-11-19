/*
Problem: Isomorphic Strings
LeetCode: 205

Input: s = "egg", t = "add"
Output: true

Input: s = "foo", t = "bar"
Output: false
*/

#include <string>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int mapST[256] = {0};
        int mapTS[256] = {0};

        for(int i = 0; i < s.length(); i++) {
            unsigned char a = s[i];
            unsigned char b = t[i];

            if(mapST[a] == 0 && mapTS[b] == 0) {
                mapST[a] = b + 1;
                mapTS[b] = a + 1;
            }
            else if(mapST[a] != b + 1 || mapTS[b] != a + 1) {
                return false;
            }
        }

        return true;
    }
};
