class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int start = 0, end = 0;
        int maxLength = 0;

        while (end < s.size()) {
            if (st.find(s[end]) == st.end()) {
                st.insert(s[end]);
                maxLength = max(maxLength, end - start + 1);
                end++;
            } else {
                st.erase(s[start]);
                start++;
            }
        }

        return maxLength;
    }
};