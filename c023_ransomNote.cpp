class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> charCount;
        for (auto ch:magazine){
            if (charCount.find(ch) != charCount.end()) charCount[ch]++;
            else charCount.insert({ch, 1});
        }
        
        for (auto ch:ransomNote){
            if (charCount.find(ch) == charCount.end()) return false;
            else {
                if (charCount[ch] == 0) return false;
                charCount[ch]--;
            }
        }
            
        return true;
    }
};