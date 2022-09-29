class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for (int i=0; i < nums.size(); i++){
            if (seen.find(target - nums[i]) != seen.end()){
                return vector<int> {i, seen.find(target - nums[i])->second};
            }
            seen.insert({nums[i], i});
        };
        
        return vector<int> {-1, -1};
    };
};