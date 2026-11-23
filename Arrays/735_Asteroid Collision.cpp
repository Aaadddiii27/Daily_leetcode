/*
Problem: Asteroid Collision
LeetCode: 735

Input: [5,10,-5]
Output: [5,10]

Input: [8,-8]
Output: []

Input: [10,2,-5]
Output: [10]
*/

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;

        for(int i = 0; i < asteroids.size(); i++) {
            int current = asteroids[i];
            bool alive = true;

            while(alive && current < 0 &&
                  !st.empty() && st.back() > 0) {

                if(st.back() < -current) {
                    st.pop_back();
                }
                else if(st.back() == -current) {
                    st.pop_back();
                    alive = false;
                }
                else {
                    alive = false;
                }
            }

            if(alive) {
                st.push_back(current);
            }
        }

        return st;
    }
};
