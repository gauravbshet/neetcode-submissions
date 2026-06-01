class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        s.erase(remove_if(s.begin(), s.end(), [](char c){ return !isalnum(c); }), s.end());
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i]!=s[n-1-i]){
            return false;
            }
        }
        return true;
    }
};