class Solution {
public:
    bool sameString(vector<char> s, vector<char> t){
        if (s.size() != t.size()) return false;
        for (int i=0; i < s.size(); i++) if (s[i] != t[i]) return false;
        return true;
    }
    bool backspaceCompare(string s, string t) {
        vector<char> typedS;
        vector<char> typedT;
        
        for (auto ch:s){
            if (ch != '#') typedS.push_back(ch);
            else {
                if (typedS.size()) typedS.pop_back();
            }
        }
        
        for (auto ch:t){
            if (ch != '#') typedT.push_back(ch);
            else {
                if (typedT.size()) typedT.pop_back();
            }
        }
        
        return sameString(typedS, typedT);
    }
};