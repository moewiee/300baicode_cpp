class Solution {
public:
    bool isPalindrome(string s){
        int i = 0;
        int j = s.size() - 1;
        while (i < j){
            if (s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        while (i < j){
            if (s[i] != s[j]) return isPalindrome(s.substr(i+1, j-i)) or isPalindrome(s.substr(i, j-i));
            i++;
            j--;
        }
        return true;
    }
};