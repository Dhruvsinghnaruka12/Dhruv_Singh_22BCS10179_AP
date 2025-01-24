/*Given a string s, find the length of the longest 
substring
 without repeating characters.*/

 #include<iostream>
 #include<unordered_set>
 using namespace std;
 
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0; 
        int n = s.length();
        int ans = 0; 
        unordered_set<char> st; 

        while (r < n) {
        
            if (st.find(s[r]) == st.end()) {
                st.insert(s[r]); 
                ans = max(ans, r - l + 1); 
                r++; 
            } else {
                //
                st.erase(s[l]); 
                l++; 
            }
        }
        return ans; 
    }
};

 