class Solution {
public:
    int max(int a, int b){
        return a > b? a : b;
    }
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int startIdx = 0;
        int endIdx = 0;
        int count = 0;
        while (endIdx < s.size()){
            if (!seen.count(s[endIdx])){
                seen.insert(s[endIdx]);
                count = max(count, endIdx - startIdx + 1);
                endIdx++;
            }
            else {
                while (seen.count(s[endIdx])){
                    seen.erase(s[startIdx]);
                    startIdx++;
                }
                seen.insert(s[endIdx]);
                count = max(count, endIdx - startIdx + 1);
                endIdx++;
            }
        }
        
        return count;
    }
};