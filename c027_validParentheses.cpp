class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> match;
        match.insert({'(', ')'});
        match.insert({'[', ']'});
        match.insert({'{', '}'});
        
        vector<char> parentheses;
        
        for (auto ch:s){
            if (ch == '(' or ch == '[' or ch == '{') parentheses.push_back(ch);
            else {
                if (parentheses.size() == 0 or match[parentheses.back()] != ch) return false;
                else parentheses.pop_back();
            }
        }
        
        return parentheses.size() == 0;
    }
};