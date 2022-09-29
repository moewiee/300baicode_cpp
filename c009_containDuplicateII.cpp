class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> numIndex;
        for (int i=0; i < nums.size(); i++){
            int n = nums[i];
            if (numIndex.find(n) != numIndex.end() and i - numIndex[n] <= k) return true;
            numIndex[n] = i;
        }
        
        return false;
    }
};