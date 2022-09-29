class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> charCount;
        for(auto ch:s){
            if (charCount.find(ch) != charCount.end()) charCount[ch]++;
            else charCount.insert({ch, 1});
        }
        
        int remain = 0;
        int count = 0;
        
        for (auto kv:charCount){
            if (kv.second % 2) {
                remain = 1;
                count += kv.second - 1;
            }
            else count += kv.second;
        }
        
        return count + remain;
    }
};