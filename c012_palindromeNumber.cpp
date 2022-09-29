class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        
        vector<int> xDigit;
        while (x > 0){
            xDigit.push_back(x % 10);
            x = (x - x % 10) / 10;
        }
        
        int i = 0;
        int j = xDigit.size() - 1;
        
        while(i < j){
            if (xDigit[i] != xDigit[j]) return false;
            i++;
            j--;
        }
        
        return true;
    }
};